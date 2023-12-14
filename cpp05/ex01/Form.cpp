
#include "Form.hpp"

// Form::Form(void) {
//     std::cout << "\033[2;37m""\033[3m" "BUREAUCRAT constructor called\n" "\033[0m";
// }

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecuteIt(gradeToExecute) {
    std::cout << "\033[2;37m""\033[3m" "BUREAUCRAT parameterized constructor called\n" "\033[0m";
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::~Form()
{
    std::cout << "\033[2;37m""\033[3m" "BUREAUCRAT destructor called\n" "\033[0m";
}

Form::Form(const Form &src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecuteIt(src._gradeToExecuteIt) {}

Form &Form::operator=(const Form &src) {
    if (this != &src) {
        this->_gradeToSign = src.getSign();
        // this->_gradeToExecuteIt = src._gradeToExecuteIt;

    }
    return (*this);
}

const std::string Form::getName(void) const {
      return (this->_name);  
}

int Form::getGrade(void) const {
    return (this->_grade);
}

bool Form::getSign(void) {
	return (_isSigned);
}

void Form::increment(void) {
    try
    {
        if (this->_grade > 1)
            this->_grade -= 1;
        else
            throw Form::GradeTooHighException(); 
    }
    catch(GradeTooHighException& e)
    {
        std::cout << e.what();
    }
}

void Form::decrement(void) {
    try
    {
        if (this->_grade < 150)
            this->_grade += 1;
        else
            throw Form::GradeTooLowException(); 
    }
    catch(GradeTooLowException& e)
    {
        std::cout << e.what();
    }
}

void Form::beSigned(const Bureaucrat &b) {

}

/**
 * Overloaded Insertion Operators
*/
std::ostream & operator<<(std::ostream &cout, Form const & src) {
    std::cout << src.getName() << ", bureaucrat grade " << src.getGrade() << "\n";
    return (cout);
}
