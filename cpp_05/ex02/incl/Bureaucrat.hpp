#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "ex02.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
	// Orhtodox Canonical AForm
	Bureaucrat(void);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &cpy);

	Bureaucrat(const std::string name, int grade);

	Bureaucrat& operator=(const Bureaucrat & rhs);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	void	incrementGrade(void);
	void	decrementGrade(void);

	void	executeForm(AForm const &form) const;
	
	//Utils
	std::string const &getName(void) const;
	// void		setName(const std::string& name);
	int			getGrade(void) const;
	void		setGrade(const int grade);
	//New
	void		signForm(AForm &form);
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif