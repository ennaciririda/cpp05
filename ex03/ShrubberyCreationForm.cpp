#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
	this->_target = "anonym_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (this->get_is_signed() && executor.getGrade() <= this->get_exec_grade())
	{
		std::ofstream file;
		file.open(_target + "_shrubbery");
		if(file.is_open())
		{
			file << "               ,@@@@@@@," << std::endl;
			file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
			file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
			file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
			file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
			file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
			file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
			file << "       |o|        | |         | |" << std::endl;
			file << "       |.|        | |         | |" << std::endl;
			file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		}
		else
			throw 1337;
	}
	else
		throw ExecuteException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
