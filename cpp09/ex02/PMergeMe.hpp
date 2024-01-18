#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &src);
    PmergeMe& operator=(const PmergeMe &src);
    
    template <typename Container>
    static void sort(Container& container);

private:
    template <typename Container>
    static void merge(Container& container, int start, int mid, int end);

    template <typename Container>
    static void insertSort(Container& container, int start, int end);

    template <typename Container>
    static void mergeInsertSort(Container& container, int start, int end);
};


template <typename Container>
void PmergeMe::sort(Container& container) {
    mergeInsertSort(container, 0, container.size() - 1);
}

template <typename Container>
void PmergeMe::merge(Container& container, int start, int mid, int end) {
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    Container left(container.begin() + start, container.begin() + start + n1);
    Container right(container.begin() + mid + 1, container.begin() + mid + 1 + n2);

    i = 0;
    j = 0;
    k = start;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j])
            container[k++] = left[i++];
        else
            container[k++] = right[j++];
    }

    while (i < n1)
        container[k++] = left[i++];

    while (j < n2)
        container[k++] = right[j++];
}

template <typename Container>
void PmergeMe::insertSort(Container& container, int start, int end) {
    for (int i = start + 1; i <= end; ++i) {
        typename Container::value_type key = container[i];
        int j = i - 1;

        for (; j >= start && container[j] > key; --j)
            container[j + 1] = container[j];

        container[j + 1] = key;
    }
}

template <typename Container>
void PmergeMe::mergeInsertSort(Container& container, int start, int end) {
    if (start < end) {
        if (end - start < 10)
            insertSort(container, start, end);
        else {
            int mid = start + (end - start) / 2;
            mergeInsertSort(container, start, mid);
            mergeInsertSort(container, mid + 1, end);

            merge(container, start, mid, end);
        }
    }
}

#endif