#include "AForm.hpp"

AForm::AForm() : name("Anonym_AForm"), grade_req_to_sign(100), grade_req_to_execute(120)
{
	this->is_signed = false;
	if (this->grade_req_to_sign > 150 || this->grade_req_to_execute > 150)
		throw AForm::GradeTooLowException();
	if (this->grade_req_to_sign < 1 || this->grade_req_to_execute < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(std::string name, int grade_sign, int grade_exec) : name(name), grade_req_to_sign(grade_sign), grade_req_to_execute(grade_exec)
{
	this->is_signed = false;
	if (this->grade_req_to_sign > 150 || this->grade_req_to_execute > 150)
		throw AForm::GradeTooLowException();
	if (this->grade_req_to_sign < 1 || this->grade_req_to_execute < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &obj) : name(obj.get_name()), grade_req_to_sign(obj.get_sign_grade()), grade_req_to_execute(obj.get_exec_grade())
{
	*this = obj;
}

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
		this->is_signed = obj.is_signed;
	return *this;
}


std::string AForm::get_name() const
{
	return this->name;
}

int AForm::get_sign_grade() const
{
	return this->grade_req_to_sign;
}

int AForm::get_exec_grade() const
{
	return this->grade_req_to_execute;
}

bool AForm::get_is_signed()
{
	return this->is_signed;
}

void AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->grade_req_to_sign)
		throw AForm::GradeTooLowException();
	this->is_signed = true;
}

AForm::~AForm()
{
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
	os << obj.get_name() << ", req grade to sign :" << obj.get_sign_grade() << " , req grade to exec:" << obj.get_exec_grade();
	return os;
}
