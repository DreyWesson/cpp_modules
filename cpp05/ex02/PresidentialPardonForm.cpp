#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << "\033[2;37m""\033[3m" "PresidentialPardonForm parameterized constructor called\n" "\033[0m";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this != &src) {
        this->_target = src._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "\033[2;37m""\033[3m" "PresidentialPardonForm destructor called\n" "\033[0m";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!getSign())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();

    // std::cout << "Drilling noise!!!\n";
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}
