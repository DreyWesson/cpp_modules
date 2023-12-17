#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Creates a bureaucrat with a grade of 50.
// Creates instances of ShrubberyCreationForm, RobotomyRequestForm, and PresidentialPardonForm.
// Tries to execute the forms without signing them, expecting exceptions.
// Signs the forms using the bureaucrat.
// Executes the signed forms, demonstrating the logic of each form.
// Tries to create a bureaucrat with an invalid grade (200), expecting a GradeTooLowException.

int main() {
    try {
        // Create a bureaucrat
        Bureaucrat bureaucrat("John Doe", 50);

        // Create forms
        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Person");

        // Try to execute forms without signing
        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);
        std::cout << "\n";

        // Sign the forms
        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        std::cout << "\n";

        // Execute the forms
        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);

        // Try to create a bureaucrat with an invalid grade (too high)
        try {
            Bureaucrat invalidBureaucratHigh("InvalidHigh", 200);  // Should throw GradeTooLowException
        } catch (std::exception &e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

        // Try to create a bureaucrat with an invalid grade (too low)
        try {
            Bureaucrat invalidBureaucratLow("InvalidLow", 0);  // Should throw GradeTooHighException
        } catch (std::exception &e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }

    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
