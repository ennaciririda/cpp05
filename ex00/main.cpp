#include "Bureaucrat.hpp"


int main()
{
	try
	{
		Bureaucrat b("hmed" ,150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}