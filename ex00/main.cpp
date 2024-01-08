#include "Bureaucrat.hpp"

void func()
{
	system("leaks bureau");
}

int main()
{
	try
	{
		// Bureaucrat *b = new Bureaucrat("hmed", 151);
		atexit(func);
		// Bureaucrat b("hmed" ,150);
		// Bureaucrat b2("hmed" ,1);
		// Bureaucrat t = b;
		// Bureaucrat b3("hmed" ,12);
		// Bureaucrat c(b);
		// b3.increase_gade();
		// std::cout << t << std::endl;
		// b2.decrease_grade();
		// b.decrease_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}