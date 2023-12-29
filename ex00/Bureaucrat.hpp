#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	std::string getName();
	int getGrade();
	void increase_gade();
	void decrease_grade();
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

#endif