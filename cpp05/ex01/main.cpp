#include "./inc/Form.hpp"
#include "./inc/Bureaucrat.hpp"

// void no_clearance() {
// 	Bureaucrat politico("Optimus prime", 15);
// 	Form form("HoA", 4, 4);
// 	politico.signForm(form);
// }

// void got_clearance() {
// 	Bureaucrat politico("Optimus prime", 2);
// 	Form form("HoA", 54, 54);
// 	politico.signForm(form);
// }

// void no_exec() {
// 	Bureaucrat politico("Optimus prime", 2);
// 	Form form("HoA", 54, -54);
// 	politico.signForm(form);
// }

// int main(void) {
// 	try
// 	{
// 		// no_clearance();
// 		// got_clearance();
// 		no_exec();
//     } catch (Bureaucrat::GradeTooHighException& e) {
//         std::cout << e.what();
//     } catch (Bureaucrat::GradeTooLowException& e) {
//         std::cout << e.what();
//     } catch (std::exception& e) {
//         std::cout << e.what();
//     }
// 	return (0);
// }


#include "./inc/Form.hpp"
#include "./inc/Bureaucrat.hpp"

void valid_clearance() {
try {
        // Test Bureaucrat constructor with valid and invalid grades
        Bureaucrat validBureaucrat("John", 50);
        std::cout << validBureaucrat << std::endl;


        // Test Bureaucrat increment and decrement functions
        validBureaucrat.increment();
        std::cout << validBureaucrat << std::endl;
        validBureaucrat.decrement();
        std::cout << validBureaucrat << std::endl;

        // Test Form constructor with valid and invalid grades
        Form validForm("Application Form", 75, 50);
        std::cout << validForm << std::endl;

        // Test signing and printing Form status
        validForm.beSigned(validBureaucrat);
        std::cout << validForm << std::endl;

        // Test Bureaucrat signForm function
        Bureaucrat bureaucratToSign("Signer", 80);
        bureaucratToSign.signForm(validForm);

    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

}

void too_high() {
	    try {
        // Uncomment the line below to test GradeTooHighException
        Bureaucrat invalidHighGrade("InvalidHigh", 0);

        // Uncomment the line below to test GradeTooHighException on increment
        // validBureaucrat.increment();

        // Uncomment the line below to test GradeTooLowException on decrement
        // validBureaucrat.decrement();



        // Uncomment the line below to test GradeTooHighException for signing
        Form invalidSignGrade("InvalidSignGrade", 160, 50);

        // Uncomment the line below to test GradeTooLowException for signing
        Form invalidSignGrade("InvalidSignGrade", 75, 0);



        // Uncomment the line below to test GradeTooLowException for signing
        // validForm.beSigned(validBureaucrat);


        // Uncomment the line below to test Bureaucrat signForm when grade is too low
        // Bureaucrat lowGradeBureaucrat("LowGradeSigner", 30);
        // lowGradeBureaucrat.signForm(validForm);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}


#include "./inc/Form.hpp"
#include "./inc/Bureaucrat.hpp"

int main() {
    try {
        // Test Bureaucrat constructor with valid and invalid grades
        Bureaucrat validBureaucrat("John", 50);
        std::cout << validBureaucrat << std::endl;

        // Uncomment the line below to test GradeTooHighException
        // Bureaucrat invalidHighGrade("InvalidHigh", 0);

        // Uncomment the line below to test GradeTooLowException
        // Bureaucrat invalidLowGrade("InvalidLow", 160);

        // Test Bureaucrat increment and decrement functions
        validBureaucrat.increment();
        std::cout << validBureaucrat << std::endl;
        validBureaucrat.decrement();
        std::cout << validBureaucrat << std::endl;

        // Uncomment the line below to test GradeTooHighException on increment
        // validBureaucrat.increment();

        // Uncomment the line below to test GradeTooLowException on decrement
        // validBureaucrat.decrement();

        // Test Form constructor with valid and invalid grades
        Form validForm("Application Form", 75, 50);
        std::cout << validForm << std::endl;

        // Uncomment the line below to test GradeTooHighException for signing
        // Form invalidSignGrade("InvalidSignGrade", 160, 50);

        // Uncomment the line below to test GradeTooLowException for signing
        // Form invalidSignGrade("InvalidSignGrade", 75, 0);

        // Test signing and printing Form status
        validForm.beSigned(validBureaucrat);
        std::cout << validForm << std::endl;

        // Uncomment the line below to test GradeTooLowException for signing
        // validForm.beSigned(validBureaucrat);

        // Test Bureaucrat signForm function
        Bureaucrat bureaucratToSign("Signer", 80);
        bureaucratToSign.signForm(validForm);

        // Uncomment the line below to test Bureaucrat signForm when grade is too low
        // Bureaucrat lowGradeBureaucrat("LowGradeSigner", 30);
        // lowGradeBureaucrat.signForm(validForm);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

