#include "PMergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    (void) src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &src)
{
    (void) src;
	return (*this);
}