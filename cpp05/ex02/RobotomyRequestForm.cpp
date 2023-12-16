#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {
    std::cout << "\033[2;37m""\033[3m" "RobotomyRequestForm constructor called\n" "\033[0m";
}

RobotomyRequestForm::RobotomyRequestForm(int sign, int exec) : _sign(sign), _exec(exec) {
    std::cout << "\033[2;37m""\033[3m" "RobotomyRequestForm parameterized constructor called\n" "\033[0m";

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : _sign(src._sign), _exec(src._exec) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this != &src) {
        this->_sign = src._sign;
        this->_exec = src._exec;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "\033[2;37m""\033[3m" "RobotomyRequestForm destructor called\n" "\033[0m";
}
