#include "Intern.hpp"

Intern::Intern()
{
}


AForm *Intern::makeForm(std::string form_name, std::string target)
{
	AForm* (Intern::* tab[]) (std::string) = {&Intern::shrubbery_func, &Intern::robotomy_func, &Intern::Presidential_func};
	for (int i = 0; i < 3; i++)
	{
		if(tab[i].)
	}
}

AForm *Intern::shrubbery_func(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::robotomy_func(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::Presidential_func(std::string target)
{
	return new PresidentialPardonForm(target);
}

Intern &Intern::operator=(const Intern &obj)
{
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
}

Intern::~Intern()
{
}
