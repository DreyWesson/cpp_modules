#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>

// Custom implementation of std::next for C++98
template <typename Iterator, typename Distance>
Iterator next(Iterator iter, Distance n) {
    std::advance(iter, n);
    return iter;
}

// Function to merge two sorted halves of a vector
template <typename Iterator>
void merge(Iterator first, Iterator middle, Iterator last) {
    typedef typename std::iterator_traits<Iterator>::value_type ValueType;
    std::vector<ValueType> left(first, middle);
    std::vector<ValueType> right(middle, last);

    typename std::vector<ValueType>::iterator leftIt = left.begin();
    typename std::vector<ValueType>::iterator rightIt = right.begin();
    Iterator current = first;

    while (leftIt != left.end() && rightIt != right.end()) {
        if (*leftIt < *rightIt) {
            *current++ = *leftIt++;
        } else {
            *current++ = *rightIt++;
        }
    }

    // Copy the remaining elements, if any
    std::copy(leftIt, left.end(), current);
    std::copy(rightIt, right.end(), current);
}

// Recursive function for merge-insertion sort
template <typename Iterator>
void merge_insertion_sort_impl(Iterator first, Iterator last) {
    typedef typename std::iterator_traits<Iterator>::difference_type DifferenceType;
    DifferenceType size = std::distance(first, last);
    if (size < 2) return;

    Iterator middle = next(first, size / 2); // Using custom next function

    merge_insertion_sort_impl(first, middle);
    merge_insertion_sort_impl(middle, last);

    merge(first, middle, last);
}

// Wrapper function for merge-insertion sort
template <typename Iterator>
void merge_insertion_sort(Iterator first, Iterator last) {
    merge_insertion_sort_impl(first, last);
}

int main(int argc, char *argv[]) {
    // Check if there are enough command-line arguments
    if (argc < 2) {
        std::cerr << "Error: Insufficient arguments\n";
        return 1;
    }

    // Parse command-line arguments into a vector of positive integers
    std::vector<int> original_sequence;
    try {
        for (int i = 1; i < argc; ++i) {
            int value = std::atoi(argv[i]);
            if (value > 0) {
                original_sequence.push_back(value);
            } else {
                throw std::invalid_argument("Negative value encountered");
            }
        }
    } catch (...) {
        std::cerr << "Error: Invalid input\n";
        return 1;
    }

    // Copy the original sequence for later comparison
    std::vector<int> original_copy = original_sequence;

    // Display the unsorted sequence
    std::cout << "\033[31m""\033[1m""Before: ""\033[0m";
    for (std::vector<int>::const_iterator it = original_sequence.begin(); it != original_sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Measure time to process data management part
    clock_t start_data = clock();

    // Perform sorting using merge-insertion sort
    merge_insertion_sort(original_sequence.begin(), original_sequence.end());

    clock_t end_data = clock();
    double duration_data = static_cast<double>(end_data - start_data) / CLOCKS_PER_SEC * 1000000;

    // Display the sorted sequence
    std::cout << "\033[1m""\033[32m""After: ""\033[0m";
    for (std::vector<int>::const_iterator it = original_sequence.begin(); it != original_sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Measure time to process sorting part
    clock_t start_sorting = clock();

    // Restore the original sequence for re-sorting
    original_sequence = original_copy;

    // Perform sorting again using merge-insertion sort
    merge_insertion_sort(original_sequence.begin(), original_sequence.end());

    clock_t end_sorting = clock();
    double duration_sorting = static_cast<double>(end_sorting - start_sorting) / CLOCKS_PER_SEC * 1000000;

    // Display timing information
    std::cout << "Time to process a range of " << original_sequence.size() << " elements with std::vector: "
              << duration_data << " us\n";
    std::cout << "Time to process a range of " << original_sequence.size() << " elements with std::vector: "
              << duration_sorting << " us\n";

    return 0;
}
