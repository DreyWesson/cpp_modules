#include "Form.hpp"
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) {
    std::cout << "\033[2;37m""\033[3m" "BUREAUCRAT constructor called\n" "\033[0m";
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name) {
    std::cout << "\033[2;37m""\033[3m" "BUREAUCRAT parameterized constructor called\n" "\033[0m";
    std::cout << "_name: " << _name << "\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    std::cout << "\033[2;37m""\033[3m" "BUREAUCRAT parameterized constructor called\n" "\033[0m";
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "\033[2;37m""\033[3m" "BUREAUCRAT destructor called\n" "\033[0m";
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
    if (this != &src)
        this->_grade = src._grade;
    return (*this);
}

/**
 * Overloaded Insertion Operators
*/
std::ostream & operator<<(std::ostream &cout, Bureaucrat const & src) {
    cout << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (cout);
}
