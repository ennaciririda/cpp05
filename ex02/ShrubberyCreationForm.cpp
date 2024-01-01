#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name("Shrubbery"), grade_req_to_sign(145), grade_req_to_execute(137)
{
	std::string target = "anonym";
	std::ofstream file;
	file.open(target + "_shrubbery");
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
		throw "faild to open the file";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : name("Shrubbery"), grade_req_to_sign(145), grade_req_to_execute(137)
{
	std::ofstream file;
	file.open(target + "_shrubbery");
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : name(obj.name), grade_req_to_sign(145), grade_req_to_execute(137)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	std::cout << "hello";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
