#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "\033[2;37m""\033[3m" "RobotomyRequestForm parameterized constructor called\n" "\033[0m";

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this != &src) {
        this->_target = src._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "\033[2;37m""\033[3m" "RobotomyRequestForm destructor called\n" "\033[0m";
}
