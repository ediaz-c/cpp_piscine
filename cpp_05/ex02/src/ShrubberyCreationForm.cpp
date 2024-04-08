#include "ex02.hpp"

int const ShrubberyCreationForm::minGradeToSign = 145;
int const ShrubberyCreationForm::minGradeToExecute = 137;
std::string const ShrubberyCreationForm::name = "ShrubberyCreationForm";

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm(name, minGradeToSign, minGradeToExecute) , target("default")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) :
	AForm(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute()), target(cpy.getTarget())
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	AForm(name, minGradeToSign, minGradeToExecute), target(target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream file;
	std::string filename = this->getTarget() + "_shrubbery";
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	file << TREE << std::endl;
	file.close();
}

// Getters
std::string const &ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}