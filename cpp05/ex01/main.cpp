#include "./inc/Form.hpp"
#include "./inc/Bureaucrat.hpp"

void testBureaucratConstructor() {
    try {
        // Test Bureaucrat constructor with valid and invalid grades
        Bureaucrat validBureaucrat("John", 50);
        std::cout << validBureaucrat << std::endl;

        // Uncomment the line below to test GradeTooHighException
        // Bureaucrat invalidHighGrade("InvalidHigh", 0);

        // Uncomment the line below to test GradeTooLowException
        // Bureaucrat invalidLowGrade("InvalidLow", 160);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

void testBureaucratIncrementDecrement() {
    try {
        // Test Bureaucrat increment and decrement functions
        Bureaucrat validBureaucrat("John", 50);
        std::cout << validBureaucrat << std::endl;

        validBureaucrat.increment();
        std::cout << validBureaucrat << std::endl;

        validBureaucrat.decrement();
        std::cout << validBureaucrat << std::endl;

        // Uncomment the lines below to test GradeTooHighException on increment
        // validBureaucrat.increment();

        // Uncomment the lines below to test GradeTooLowException on decrement
        // validBureaucrat.decrement();
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

void testFormConstructor() {
    try {
        // Test Form constructor with valid and invalid grades
        Form validForm("Application Form", 75, 50);
        std::cout << validForm << std::endl;

        // Uncomment the line below to test GradeTooHighException for signing
        // Form invalidSignGrade("InvalidSignGrade", 160, 50);

        // Uncomment the line below to test GradeTooLowException for signing
        // Form invalidSignGrade("InvalidSignGrade", 75, 0);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

void testFormSigning() {
    try {
        // Test signing and printing Form status
        Bureaucrat validBureaucrat("John", 50);
        Form validForm("Application Form", 75, 50);
        std::cout << validForm << std::endl;

        validForm.beSigned(validBureaucrat);
        std::cout << validForm << std::endl;

        // Uncomment the line below to test GradeTooLowException for signing
        // validForm.beSigned(validBureaucrat);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

void testBureaucratSignForm() {
    try {
        // Test Bureaucrat signForm function
        Bureaucrat bureaucratToSign("Signer", 80);
        Form validForm("Application Form", 75, 50);
        std::cout << validForm << std::endl;

        bureaucratToSign.signForm(validForm);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}

int main() {
    // Test different aspects of Bureaucrat and Form
    testBureaucratConstructor();
    testBureaucratIncrementDecrement();
    testFormConstructor();
    testFormSigning();
    testBureaucratSignForm();

    return 0;
}
