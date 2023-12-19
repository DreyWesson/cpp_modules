#include "./inc/AForm.hpp"
#include "./inc/Bureaucrat.hpp"
#include "./inc/PresidentialPardonForm.hpp"
#include "./inc/RobotomyRequestForm.hpp"
#include "./inc/ShrubberyCreationForm.hpp"

// Creates a bureaucrat with a grade of 50.
// Creates instances of ShrubberyCreationForm, RobotomyRequestForm, and PresidentialPardonForm.
// Tries to execute the forms without signing them, expecting exceptions.
// Signs the forms using the bureaucrat.
// Executes the signed forms, demonstrating the logic of each form.
// Tries to create a bureaucrat with an invalid grade (200), expecting a GradeTooLowException.


void executeFormsTest(Bureaucrat& bureaucrat) {
    // Create forms
    ShrubberyCreationForm shrubberyForm("Home");
    RobotomyRequestForm robotomyForm("Target");
    PresidentialPardonForm pardonForm("Person");
    (void)bureaucrat;
    // Try to execute forms without signing
    // bureaucrat.executeForm(shrubberyForm);
    // std::cout << "\n";
    bureaucrat.executeForm(robotomyForm);
    // std::cout << "\n";
    // bureaucrat.executeForm(pardonForm);
    // std::cout << "\n";

    // Sign the forms
    // bureaucrat.signForm(shrubberyForm);
    // std::cout << "\n";
    bureaucrat.signForm(robotomyForm);
    // std::cout << "\n";
    // bureaucrat.signForm(pardonForm);
    // std::cout << "\n";



    // // Execute the forms
    // bureaucrat.executeForm(shrubberyForm);
    // std::cout << "\n";
    bureaucrat.executeForm(robotomyForm);
    // std::cout << "\n";
    // bureaucrat.executeForm(pardonForm);
}

void createInvalidBureaucratTest() {
    try {
        Bureaucrat invalidBureaucratHigh("InvalidHigh", 200);  // Should throw GradeTooLowException
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what();
    }

    try {
        Bureaucrat invalidBureaucratLow("InvalidLow", 0);  // Should throw GradeTooHighException
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what();
    }
}

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 50);

        // Test executing and signing forms
        executeFormsTest(bureaucrat);

        // Test creating invalid bureaucrats
        createInvalidBureaucratTest();
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
