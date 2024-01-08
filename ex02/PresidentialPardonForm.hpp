#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		void execute(Bureaucrat const & executor);
		~PresidentialPardonForm();

	class ExecuteException : public std::exception
	{
		public :
			const char* what() const throw() {
			return "unable to execute the form";
		}
	};
};

#endif