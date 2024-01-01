#include "Form.hpp"

Form::Form() : name("Anonym_Form"), grade_req_to_execute(120), grade_req_to_sign(100)
{
	this->is_signed = false;
	if (this->grade_req_to_sign > 150 || this->grade_req_to_execute > 150)
		throw Form::GradeTooLowException();
	if (this->grade_req_to_sign < 1 || this->grade_req_to_execute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(std::string name, int grade_sign, int grade_exec) : name(name), grade_req_to_sign(grade_sign), grade_req_to_execute(grade_exec)
{
	this->is_signed = false;
	if (this->grade_req_to_sign > 150 || this->grade_req_to_execute > 150)
		throw Form::GradeTooLowException();
	if (this->grade_req_to_sign < 1 || this->grade_req_to_execute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &obj) : name(obj.get_name()), grade_req_to_execute(obj.get_exec_grade()), grade_req_to_sign(obj.get_sign_grade())
{
	*this = obj;
}

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
		this->is_signed = obj.is_signed;
	return *this;
}


std::string Form::get_name() const
{
	return this->name;
}

int Form::get_sign_grade() const
{
	return this->grade_req_to_sign;
}

int Form::get_exec_grade() const
{
	return this->grade_req_to_execute;
}

bool Form::get_is_signed()
{
	return this->is_signed;
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->grade_req_to_sign)
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

Form::~Form()
{
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << obj.get_name() << ", req grade to sign :" << obj.get_sign_grade() << " , req grade to exec:" << obj.get_exec_grade();
	return os;
}
