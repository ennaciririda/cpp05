#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm b("rida");
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