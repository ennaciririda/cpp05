#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
	this->_target = "anonym_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (this->get_is_signed() && executor.getGrade() <= this->get_exec_grade())
	{
		static int st = 2;
		if (st % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "The robotomy failed" << std::endl;
		st++;
	}
	else
		throw ExecuteException();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
