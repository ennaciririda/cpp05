#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat& operator=(const Bureaucrat& obj);
	Bureaucrat(const Bureaucrat &obj);
	std::string getName() const;
	int getGrade() const;
	void increase_gade();
	void decrease_grade();
	void signForm(AForm &form);
	void executeForm(AForm const & form);
	~Bureaucrat();

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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif