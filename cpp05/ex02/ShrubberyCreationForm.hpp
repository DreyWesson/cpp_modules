
#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <stdexcept>


class ShrubberyCreationForm {
private:
    int _sign;
    int _exec;

public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(int sign, int exec);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm(void);
};

#endif
