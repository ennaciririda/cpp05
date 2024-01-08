#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
		void execute(Bureaucrat const & executor);
		~RobotomyRequestForm();

	class ExecuteException : public std::exception
	{
		public :
			const char* what() const throw() {
			return "unable to execute the form";
		}
	};
};

#endif