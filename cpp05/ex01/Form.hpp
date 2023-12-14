#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

const Bureaucrat;

class Form {
private:
    const std::string _name;
	bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecuteIt;

public:
    Form(const std::string name, int _gradeToSign, int _gradeToExecuteIt);
    Form(const Form &src);
    Form &operator=(const Form &src);
    ~Form(void);

	void beSigned(const Bureaucrat &b);
    
    const std::string getName(void) const;
	bool getSign(void);
	int getGrade(void) const;

    void increment(void);
    void decrement(void);

    class GradeTooHighException;
    class GradeTooLowException;    
};

class Form::GradeTooHighException : public std::exception {
public:
    virtual const char* what() const throw() {
        return ("You can't go any higher than these\n");
    }
};

class Form::GradeTooLowException : public std::exception {
public:
    virtual const char* what() const throw() {
        return ("You can't go any lower than these\n");
    }
};

std::ostream & operator<<(std::ostream &cout, Form const & i);

#endif
