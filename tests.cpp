
#include <iostream>

class rida :public std::exception
{
	const char* what() const throw()
	{
		return ("pppppppp");
	}
};

void stackk() {
	throw 3;
}

void stackun() {
	stackk();
	std::cout << "hhhh\n";
}

int main()
{
	// rida a;
	// rida b;
	// b = a;
	try
	{
		rida *a = new rida();
		throw a;
	} 
	catch(const std::exception *e)
	{
		std::cerr << e->what() << '\n';
	}
	catch(...)
	{
		std::cerr << "hmed" << '\n';

	}
}