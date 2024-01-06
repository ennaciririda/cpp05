#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("rida", 100);
		Form f1("f1", 100, 40);
		// b.decrease_grade();
		f1.beSigned(b);
		b.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}