#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!getSign())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();

    std::cout << "Drilling noise!!!\n";
    if (rand() % 2 == 0) {
        std::cout << _target << " has been robotomized successfully!\n";
    } else {
        std::cout << "Robotomy failed for " << _target << ".\n";
    }
}
