#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{

	public:
		Intern();
		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);
		AForm *makeForm(std::string form_name, std::string target);
		~Intern();
};

#endif