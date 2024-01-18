#include "./PMergeMe.hpp"

void printDuration(double duration) {
    std::cout << "Time to process: ";
    std::cout << std::fixed << std::setprecision(3) << duration * 1e3 << " us\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: Insufficient arguments\n";
        return 1;
    }

    std::vector<int> original_sequence;
    std::deque<int> original_sequence_copy;

    try {
        for (int i = 1; i < argc; ++i) {
            int value = std::atoi(argv[i]);
            if (value > 0) {
                original_sequence.push_back(value);
                original_sequence_copy.push_back(value);
            } else {
                throw std::invalid_argument("Negative value encountered");
            }
        }
    } catch (...) {
        std::cerr << "Error: Invalid input\n";
        return 1;
    }

    std::cout << "\033[31m""\033[1m""Before: ""\033[0m";
    for (std::vector<int>::const_iterator it = original_sequence.begin(); it != original_sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    clock_t start_data = clock();
    PmergeMe::sort(original_sequence);
    clock_t end_data = clock();
    double duration_data = static_cast<double>(end_data - start_data) / CLOCKS_PER_SEC;

    std::cout << "\033[1m""\033[32m""After: ""\033[0m";
    for (std::vector<int>::const_iterator it = original_sequence.begin(); it != original_sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    clock_t start_sorting = clock();
    PmergeMe::sort(original_sequence_copy);
    clock_t end_sorting = clock();
    double duration_sorting = static_cast<double>(end_sorting - start_sorting) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << original_sequence.size() << " elements with std::vector: ";
    printDuration(duration_data);
    std::cout << "Time to process a range of " << original_sequence.size() << " elements with std::deque: ";
    printDuration(duration_sorting);

    return 0;
}
