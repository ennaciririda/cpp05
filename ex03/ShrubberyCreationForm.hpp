#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private :
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
		void execute(Bureaucrat const & executor);
		~ShrubberyCreationForm();

	class ExecuteException : public std::exception
	{
		public :
			const char* what() const throw() {
			return "unable to execute the form";
		}
	};
};

#endif