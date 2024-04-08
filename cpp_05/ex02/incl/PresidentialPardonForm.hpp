#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "ex02.hpp"

class AForm;

class PresidentialPardonForm: public AForm
{
	private:
		static const int minGradeToSign;
		static const int minGradeToExecute;
		static const std::string name;
		const std::string target;
		PresidentialPardonForm(void);
	public:
	// Orthodox Canonical Class
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	// Constructor main
	PresidentialPardonForm(const std::string target);

	// Pure virtual
	void execute(Bureaucrat const &executor) const;

	// Getters
	std::string const &getTarget(void) const;
};

#endif