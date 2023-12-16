
#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <stdexcept>
#include <fstream>

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {
private:
    std::string _target;

public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm(void);
    void execute(Bureaucrat const & executor) const;

    class FileOpenException;
};

class ShrubberyCreationForm::FileOpenException : public std::exception {
public:
    virtual const char* what() const throw() {
        return ("File fails to open\n");
    }
};

#endif
