#include "SHRUBBERYCREATIONFORM.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {
    std::cout << "\033[2;37m""\033[3m" "PRESIDENTIALPARDONFORM constructor called\n" "\033[0m";
}

ShrubberyCreationForm::ShrubberyCreationForm(int sign, int exec) : _sign(sign), _exec(exec) {
    std::cout << "\033[2;37m""\033[3m" "PRESIDENTIALPARDONFORM parameterized constructor called\n" "\033[0m";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "\033[2;37m""\033[3m" "PRESIDENTIALPARDONFORM destructor called\n" "\033[0m";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : _sign(src._sign), _exec(src._exec) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    if (this != &src) {
        this->_sign = src._sign;
        this->_exec = src._exec;
    }
    return (*this);
}
