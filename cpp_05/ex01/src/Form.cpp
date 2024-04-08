#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

Form::~Form()
{
}

Form::Form(const Form &cpy) : _name(cpy._name), _signed(cpy._signed), _gradeToSign(cpy._gradeToSign), _gradeToExecute(cpy._gradeToExecute)
{
}

Form &Form::operator=(const Form &rhs)
{
	if (this == &rhs)
		return (*this);
	_signed = rhs._signed;
	return (*this);
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	if (this->_signed)
		throw Form::FormAlreadySignedException();
	this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}

const char *Form::FormAlreadySignedException::what() const throw()
{
	return ("Form is already signed");
}

void Form::setSigned(bool _signed)
{
	this->_signed = _signed;
}

std::string const &Form::getName(void) const
{
	return (_name);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

int Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form " << form.getName() << " is ";
	if (form.getSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << form.getGradeToSign() << " to sign and grade " << form.getGradeToExecute() << " to execute.";
	return (out);
}

