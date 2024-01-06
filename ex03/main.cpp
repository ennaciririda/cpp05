#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat br("bur", 12);
		// ShrubberyCreationForm b("rida");
		RobotomyRequestForm b ("hmed");
		b.beSigned(br);
		b.execute(br);
		b.execute(br);
		b.execute(br);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(int)
	{
		std::cout << "faild to open the file" << std::endl;
	}
}