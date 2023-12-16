#include "Form.hpp"
#include "Bureaucrat.hpp"

void no_clearance() {
	Bureaucrat politico("Optimus prime", 15);
	Form form("HoA", 4, 4);
	politico.signForm(form);
}

void got_clearance() {
	Bureaucrat politico("Optimus prime", 2);
	Form form("HoA", 54, 54);
	politico.signForm(form);
}

void no_exec() {
	Bureaucrat politico("Optimus prime", 2);
	Form form("HoA", 54, -54);
	politico.signForm(form);
}

int main(void) {
	try
	{
		// no_clearance();
		// got_clearance();
		no_exec();
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what();
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what();
    } catch (std::exception& e) {
        std::cout << e.what();
    }
	return (0);
}
