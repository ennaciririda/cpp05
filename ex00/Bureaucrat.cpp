#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("anonymous") , grade(120)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	this->grade = grade;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "copy assign\n";
	if (this != &obj)
		this->grade = obj.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.getName())
{
	std::cout << "copy const\n";
	*this = obj;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::increase_gade()
{
	this->grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrease_grade()
{
	this->grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}
