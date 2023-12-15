#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void) {
try
{
    Bureaucrat politico("Optimus prime", 5);
	Form form("HoA", 4, 4);
	// form.beSigned(politico);
	politico.signForm(form);
	// form.beSigned(politico);
	
}
catch(const Bureaucrat::GradeTooLowException& e)
{
	std::cerr << e.what() << '\n';
}
	
	return (0);
}
