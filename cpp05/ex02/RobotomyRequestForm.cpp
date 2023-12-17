#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this != &src) {
        this->_target = src._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    try {
        checkPermission(executor);
        std::cout << "Drilling noise!!!\n";
        (rand() % 2 == 0)
            ? std::cout << _target << " has been robotomized successfully!\n"
            : std::cout << "Robotomy failed for " << _target << ".\n";  
    } catch (const AForm::GradeTooLowException & e) {
        std::cerr << "GradeTooLowException: " << e.what() << std::endl;
    } catch (const AForm::FormNotSignedException & e) {
        std::cerr << "FormNotSignedException: " << e.what() << std::endl;
    } catch (const AForm::FileOpenException & e) {
        std::cerr << "FileOpenException: " << e.what() << std::endl;
    } catch (const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
}
