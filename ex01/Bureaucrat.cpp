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
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrease_grade()
{
	this->grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	if(form.get_is_signed())
		std::cout << this->getName() << " signed " << form.get_name() << std::endl;
	else
		std::cout << this->getName() << " couldn’t sign " << form.get_name() <<  " because of his don't have permission." << std::endl;
}


Bureaucrat::~Bureaucrat()
{
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}
