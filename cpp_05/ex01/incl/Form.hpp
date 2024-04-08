#ifndef FORM_HPP
#define FORM_HPP

#include "ex02.hpp"

class Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		// Orthodox Canonical Form
		Form(void);
		~Form();
		Form(const Form &cpy);
		Form &operator=(const Form &rhs);

		Form(const std::string name, int gradeToSign, int gradeToExecute);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FormAlreadySignedException : public std::exception
		{
			virtual const char* what() const throw();
		};

		// Methods
		void				beSigned(class Bureaucrat &bureaucrat);
		// Utils
		void				setSigned(bool _signed);
		
		// Getters
		std::string const	&getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif