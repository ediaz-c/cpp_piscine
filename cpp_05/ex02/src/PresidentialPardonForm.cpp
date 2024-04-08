#include "ex02.hpp"

int const PresidentialPardonForm::minGradeToSign = 25;
int const PresidentialPardonForm::minGradeToExecute = 5;
std::string const PresidentialPardonForm::name = "PresidentialPardonForm";


PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm(name, minGradeToSign, minGradeToExecute) , target("default")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) :
	AForm(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute()), target(cpy.getTarget())
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	AForm(name, minGradeToSign, minGradeToExecute), target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

// Getters
std::string const &PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}