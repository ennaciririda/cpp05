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
	Bureaucrat& operator=(const Bureaucrat& obj);
	Bureaucrat(const Bureaucrat &obj);
	std::string getName() const;
	int getGrade() const;
	void increase_gade();
	void decrease_grade();
	~Bureaucrat();
	class GradeTooHighException : public std::exception
	{
		public :
			const char* what() const throw() {
			return "Grade too high!";
		}
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char* what() const throw() {
				return "Grade too low!";
		}
	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif