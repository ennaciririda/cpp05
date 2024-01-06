
#include <iostream>

class rida
{
	private:
		int grade;
	public :
		rida();
		virtual void prt(int grade);
		rida& operator=(const rida &obj);
		int get_grade() const;

};

void rida::prt(int r)
{
	this->grade = r;
}
rida::rida()
{
	this->grade = 100;
}
rida& rida::operator=(const rida &obj)
{
	if (this != &obj)
	{
		std::cout << "here\n";
		this->grade = obj.grade;
	}
	return (*this);
}

int rida::get_grade() const
{
	return this->grade;
}

int main()
{
	rida a;
	rida b;
	b = a;
	std::cout << a.get_grade() << std::endl;
	// std::cout << b.get_grade() << std::endl;

}