#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T> 
class MutantStack : public std::stack <T> {
public:
    MutantStack() {};
    ~MutantStack() {};
    MutantStack(const MutantStack &that) : std::stack<T>(that) {};
    
    MutantStack &operator=(const MutantStack &obj) {
        if (this != &obj)
        std::stack<T>::operator=(obj);
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {return std::stack<T>::c.begin();}
    iterator end()   {return std::stack<T>::c.end();}

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin() {return this->c.rbegin();}
    reverse_iterator rend() {return this->c.rend();}
};


#endif