#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
	this->_target = "anonym_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (this->get_is_signed() && executor.getGrade() <= this->get_sign_grade())
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw ExecuteException();
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
