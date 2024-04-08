#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <ostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
	// Orhtodox Canonical Form
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
	
	//Utils
	std::string const &getName(void) const;
	// void		setName(const std::string& name);
	int			getGrade(void) const;
	void		setGrade(const int grade);
};
std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif