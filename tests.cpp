
#include <iostream>


int func(int a, int b)
{
	if (b == 1)
		std::cout <<"haa\n";
	if (b == -1)
		std::cout <<"haa42\n";
	return a + b;
}

int main()
{
	try
	{
		func(12, -1);
	}
	catch(float)
	{
		std::cerr << "r3eed" << '\n';
	}
	catch(int a)
	{
		if (a == 15)
			std::cerr << "r3eed15" << '\n';
		else
			std::cerr << "r3eed42" << '\n';
	}

}