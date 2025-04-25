#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Unnamed"), _grade(150) {}

Bureaucrat::~Bureaucrat()
{
    TRACE_MSG_DBG("Bureaucrat desctructor called");
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    TRACE_MSG_DBG("Bureaucrat copy constructor called")
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    TRACE_MSG_DBG("Bureucrat assignation operator called")
    if (this != &rhs)
    {
        this->_grade = rhs.getGrade();
    }

    return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}


int Bureaucrat::getGrade() const
{
    return this->_grade;
}

const std::string& Bureaucrat::getName() const
{
    return this->_name;
}

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}