#include "./inc/MutantStack.hpp"
#include <iostream>
#include <list>

void testMutantStack(MutantStack<int>& container) {
    container.push(5);
    container.push(17);

    std::cout << "Top element: " << container.top() << std::endl;
    container.pop();

    std::cout << "Container size: " << container.size() << std::endl;

    container.push(3);
    container.push(5);
    container.push(737);
    container.push(0);

    std::cout << "Container elements:" << std::endl;
    MutantStack<int>::iterator it = container.begin();
    MutantStack<int>::iterator ite = container.end();
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::cout << "Is the container empty? " << (container.empty() ? "Yes" : "No") << std::endl;
}

// Test function for std::list
void testStdList(std::list<int>& container) {
    container.push_back(5);
    container.push_back(17);

    // std::list doesn't have 'top' and 'pop' functions
    std::cout << "Container size: " << container.size() << std::endl;

    container.push_back(3);
    container.push_back(5);
    container.push_back(737);
    container.push_back(0);

    std::cout << "Container elements:" << std::endl;
    std::list<int>::iterator it = container.begin();
    std::list<int>::iterator ite = container.end();
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::cout << "Is the container empty? " << (container.empty() ? "Yes" : "No") << std::endl;
}

int main() {
    // Test with MutantStack
    MutantStack<int> mutantStack;
    std::cout << "==== Test with MutantStack ====" << std::endl;
    testMutantStack(mutantStack);

    // Test with std::list
    std::list<int> stdList;
    std::cout << "==== Test with std::list ====" << std::endl;
    testStdList(stdList);

    return 0;
}