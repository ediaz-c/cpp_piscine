#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << GREEN << "Test 1: Form creation" << RESET << std::endl;
	try{
		std::cout << BLUE << "Try to create form with gradeToSign < 1" << std::endl;
		Form form("form", 0, 1);
	}
	catch (std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;
	std::cout << GREEN << "Test 2: Form creation" << RESET << std::endl;
	try{
		std::cout << BLUE << "Try to create form with gradeToSign > 150" << std::endl;
		Form form("form", 151, 1);
	}
	catch (std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;
	std::cout << GREEN << "Test 3: Bureaucrat sign form" << RESET << std::endl;
	try{
		std::cout << BLUE << "Try to sign form with form method" << RESET << std::endl;
		Bureaucrat	bureaucrat("bureaucrat", 1);
		Form form("form", 1, 1);
		form.beSigned(bureaucrat);
		std::cout << "Form signed" << std::endl;
	}
	catch (std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test 4: Bureaucrat sign form with low grade" << std::endl;
	try{
		Bureaucrat bureaucrat("bureaucrat", 2);
		Form form("form", 1, 1);
		form.beSigned(bureaucrat);
	}
	catch (std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return (0);
}