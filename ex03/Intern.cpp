#include "Intern.hpp"

Intern::Intern()
{
}


AForm *Intern::makeForm(std::string form_name, std::string target)
{
	int i = 0;
	int flag = 0;
	std::string strings[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *tab[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (; i < 3; i++)
	{
		if (strings[i] == form_name)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i != j)
				delete tab[j];
		}
		std::cout << "Intern creates " << tab[i]->get_name() << std::endl;
		return tab[i];
	}
	std::cerr << "There is no form with the name given" << std::endl;
	return NULL;
}

Intern &Intern::operator=(const Intern &obj)
{
	(void)obj;
	return (*this);
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
}

Intern::~Intern()
{
}
