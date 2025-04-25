#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
# define Color_off "\033[0m"       //Color off
# define BIBlack "\033[1;90m"      //Black
# define BIRed "\033[1;91m"        //Red
# define BIGreen "\033[1;92m"      //Green
# define BIYellow "\033[1;93m"     //Yellow
# define BIBlue "\033[1;94m"       //Blue
# define BIPurple "\033[1;95m"     //Purple
# define BICyan "\033[1;96m"       //Cyan
# define BIWhite "\033[1;97m"      //White

#ifdef DEBUG
#define TRACE_MSG_DBG(msg) std::cout << BIBlue << msg << Color_off << std::endl;
#else
#define TRACE_MSG_DBG(msg)
#endif

class Bureaucrat
{
    protected:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& rhs);

        Bureaucrat(const std::string& name, int grade);

        const std::string& getName() const;
        int getGrade() const;
        int setGrade();

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif