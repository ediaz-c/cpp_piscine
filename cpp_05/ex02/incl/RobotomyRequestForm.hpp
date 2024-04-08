#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "ex02.hpp"

class AForm;

class RobotomyRequestForm: public AForm
{
	private:
		static const int minGradeToSign;
		static const int minGradeToExecute;
		static const std::string name;
		const std::string target;
		RobotomyRequestForm(void);
	public:
	// Orthodox Canonical Class
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

	// Constructor main
	RobotomyRequestForm(const std::string target);

	// Pure virtual
	void execute(Bureaucrat const &executor) const;

	// Getters
	std::string const &getTarget(void) const;
};

#endif