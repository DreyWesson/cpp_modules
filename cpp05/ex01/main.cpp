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

int main(void) {
	try
	{
		// no_clearance();
		got_clearance();
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
