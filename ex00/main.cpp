#include "Bureaucrat.hpp"


void fun()
{
	system("leaks bureau");
}

int main()
{
	try
	{
		Bureaucrat b("hmed" ,151);
		Bureaucrat *ptr = new Bureaucrat("hmed" ,151);
		Bureaucrat b2("hmed" ,1);
		Bureaucrat t = b;
		t = b2;
		Bureaucrat b3("hmed" ,12);
		Bureaucrat c(b);
		b3.increase_gade();
		std::cout << t << std::endl;
		// std::cout << c << std::endl;
		b2.decrease_grade();
		b.decrease_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	atexit(fun);
}