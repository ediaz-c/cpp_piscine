#include "ex02.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

AForm::~AForm()
{
}

AForm::AForm(const AForm &cpy) : _name(cpy._name), _signed(cpy._signed), _gradeToSign(cpy._gradeToSign), _gradeToExecute(cpy._gradeToExecute)
{
}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this == &rhs)
		return (*this);
	_signed = rhs._signed;
	return (*this);
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	if (this->_signed)
		throw AForm::FormAlreadySignedException();
	this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}
const char *AForm::ExecuteGradeTooLowException::what() const throw()
{
	return ("Executor grade is too low");
}
const char *AForm::ExecuteGradeTooHighException::what() const throw()
{
	return ("Executor grade is too high");
}

const char *AForm::FormAlreadySignedException::what() const throw()
{
	return ("Form is already signed");
}
const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::ExecuteGradeTooLowException();
}

void AForm::setSigned(bool _signed)
{
	this->_signed = _signed;
}

std::string const &AForm::getName(void) const
{
	return (_name);
}

bool AForm::getSigned(void) const
{
	return (_signed);
}

int AForm::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
	out << "Form " << form.getName() << " is ";
	if (form.getSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExecute() << " to execute.";
	return (out);
}

