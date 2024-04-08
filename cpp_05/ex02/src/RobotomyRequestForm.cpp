#include "ex02.hpp"

int const RobotomyRequestForm::minGradeToSign = 72;
int const RobotomyRequestForm::minGradeToExecute = 45;
std::string const RobotomyRequestForm::name = "RobotomyRequestForm";

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm(name, minGradeToSign, minGradeToExecute) , target("default")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) :
	AForm(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExecute()), target(cpy.getTarget())
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	AForm(name, minGradeToSign, minGradeToExecute), target(target)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "tac tac tac" << std::endl;
	if ((rand() % 100) < 50)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << this->getTarget() << " robotomization failed" << std::endl;
}

// Getters
std::string const &RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}