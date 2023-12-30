#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private :
		const	std::string	name;
		bool				is_signed;
		const			int	grade_req_to_sign;
		const			int	grade_req_to_execute;
	public :
		Form();
		Form(const Form &obj);
		Form& operator=(const Form& obj);
		Form(std::string name, int grade_sign, int grade_exec);
		std::string get_name() const;
		int get_sign_grade() const;
		int get_exec_grade() const;
		bool get_is_signed();
		void beSigned(Bureaucrat &bur);
		~Form();

	class GradeTooHighException : public std::exception
	{
		public :
			const char* what() const _NOEXCEPT {
			return "Grade too high!";
		}
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char* what() const _NOEXCEPT {
				return "Grade too low!";
		}
	};

};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif