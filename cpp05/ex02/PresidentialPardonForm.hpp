
#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <stdexcept>


class PresidentialPardonForm {
private:
    int _sign;
    int _exec;

public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(int sign, int exec);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
    ~PresidentialPardonForm(void);


};

#endif
