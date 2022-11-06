#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::action() const
{
    std::string str = ".\n"
    "               ,@@@@@@@,\n"
    "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
	"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
	"   %&&%/ %&%%&&@@\\V /@@' `88\\8 `/88'\n"
	"  `&%\\ ` /%&'    |.|        \\ '|8'\n"
	"       |o|        | |         | |\n"
	"       |.|        | |         | |\n"
	"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";

    std::ofstream	newFs;
	std::string		fileName = this->getTarget() + "_shrubbery";	

	newFs.open(fileName.c_str());
    if (!newFs)
    {
        throw std::runtime_error("The file could not be opened.");
    }
    newFs << str;
    if (newFs.fail())
    {
        throw std::runtime_error("Could not write to the file");
    }
}

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("ShrubberyCreation", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a)
    : Form(a) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
    return *this;
}
