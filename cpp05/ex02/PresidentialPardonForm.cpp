#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this != &src)
        this->_target = src._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    try {
    checkPermission(executor);

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
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
