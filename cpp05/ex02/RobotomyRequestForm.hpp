
#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <stdexcept>


class RobotomyRequestForm {
private:
    int _sign;
    int _exec;

public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(int sign, int exec);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
    ~RobotomyRequestForm(void);
};

#endif
