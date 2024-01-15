#include "./inc/MutantStack.hpp"
#include <iostream>
#include <list>

void testMutantStack() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Topmost: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "New-Top: " << mstack.top() << std::endl;
    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void testStdList() {
    std::list<int> xlist;

    xlist.push_back(5);
    xlist.push_back(17);
    std::cout << "Topmost: " << xlist.back() << std::endl;
    xlist.pop_back();
    std::cout << "New-Top: " << xlist.back() << std::endl;
    std::cout << "Size: " << xlist.size() << std::endl;

    xlist.push_back(3);
    xlist.push_back(5);
    xlist.push_back(737);
    xlist.push_back(0);
    std::list<int>::iterator it = xlist.begin();
    std::list<int>::iterator ite = xlist.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

}

int main() {
    std::cout << "==== Test with MutantStack ====" << std::endl;
    testMutantStack();

    std::cout << std::endl;

    std::cout << "==== Test with std::list ====" << std::endl;
    testStdList();

    return 0;
}