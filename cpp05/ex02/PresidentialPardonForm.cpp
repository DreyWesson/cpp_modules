#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {
    std::cout << "\033[2;37m""\033[3m" "PresidentialPardonForm constructor called\n" "\033[0m";
}

PresidentialPardonForm::PresidentialPardonForm(int sign, int exec) : _sign(sign), _exec(exec) {
    std::cout << "\033[2;37m""\033[3m" "PresidentialPardonForm parameterized constructor called\n" "\033[0m";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "\033[2;37m""\033[3m" "PresidentialPardonForm destructor called\n" "\033[0m";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : _sign(src._sign), _exec(src._exec) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this != &src) {
        this->_sign = src._sign;
        this->_exec = src._exec;
    }
    return (*this);
}
