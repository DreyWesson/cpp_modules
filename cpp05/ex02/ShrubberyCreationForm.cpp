#include "SHRUBBERYCREATIONFORM.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm",145, 137), _target( target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), _target(src._target) {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    if (this != &src)
        this->_target = src._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
