#ifndef FORM_HPP
#define FORM_HPP

#include "ex02.hpp"

class Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		// Orthodox Canonical AForm
		AForm(void);
		virtual ~AForm();
		AForm(const AForm &cpy);
		AForm &operator=(const AForm &rhs);

		AForm(const std::string name, int gradeToSign, int gradeToExecute);

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class ExecuteGradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class ExecuteGradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FormAlreadySignedException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			virtual const char* what() const throw();
		};

		// Methods
		void				beSigned(class Bureaucrat &bureaucrat);

		// Utils
		void				setSigned(bool _signed);

		// Pure virtual
		virtual void		execute(Bureaucrat const &executor) const = 0;

		// Getters
		std::string const	&getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif