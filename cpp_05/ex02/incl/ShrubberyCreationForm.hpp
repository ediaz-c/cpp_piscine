#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "ex02.hpp"

class AForm;

#define TREE	"" \
"          &&& &&  & &&\n" \
"      && &\\/&\\|& ()|/ @, &&\n" \
"      &\\/(\\/&/&||/& /_/)_&/_&\n" \
"   &() &\\/&|()|/&\\/ '%\" & ()\n" \
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n" \
"&&   && & &| &| /& & % ()& /&&\n" \
" ()&_-_-()&\\&\\|&&-&&--%---()~\n" \
"     &&     \\|||\n" \
"             |||\n" \
"             |||\n" \
"             |||\n" \
"       , -=-~  .-^- _\n"

class ShrubberyCreationForm: public AForm
{
	private:
		static const int minGradeToSign;
		static const int minGradeToExecute;
		static const std::string name;
		const std::string target;
		ShrubberyCreationForm(void);
	public:
	// Orthodox Canonical Class
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

	// Constructor main
	ShrubberyCreationForm(const std::string target);

	// Pure virtual
	void execute(Bureaucrat const &executor) const;

	// Getters
	std::string const &getTarget(void) const;
};
#endif

