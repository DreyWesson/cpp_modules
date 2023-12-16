
#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <stdexcept>

#include "AForm.hpp"


class RobotomyRequestForm : public AForm {
private:
    std::string _target;

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
    ~RobotomyRequestForm(void);
};

#endif
