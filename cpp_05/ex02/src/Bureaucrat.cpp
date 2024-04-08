#include "ex02.hpp"

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy)
{
	*this = cpy;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is too low");
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
		this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& dt)
{
	os << dt.getName() << ", bureaucrat grade " << dt.getGrade() << ".";
	return (os);
}

void	Bureaucrat::signForm(AForm &form)
{
	if (form.getGradeToSign() < this->_grade)
	{
		std::cout << this->_name << " couldn’t sign n " << form.getName() << " because his grade is too low" << std::endl;
	}
	if (form.getSigned())
	{
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because the form is already signed" << std::endl;
	}
	else
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
}

//Getters
std::string	const &Bureaucrat::getName(void) const
{
	return(this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::executeForm(AForm const &form) const
{
	if (form.getGradeToExecute() < this->_grade)
	{
		std::cout << this->_name << " couldn’t execute " << form.getName() << " because his grade is too low" << std::endl;
	}
	else
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
}