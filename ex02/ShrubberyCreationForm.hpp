#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		const	std::string	name;
		const	int	grade_req_to_sign;
		const	int	grade_req_to_execute;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
		void execute(Bureaucrat const & executor);
		~ShrubberyCreationForm();
};

#endif