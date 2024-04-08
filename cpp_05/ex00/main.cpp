#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	paco("Paco", 1);
	std::cout << paco << std::endl;
	std::cout << "===== Trying to increment grade =====" << std::endl;
	try
	{
		paco.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===== Trying to decrement grade =====" << std::endl;
	std::cout << paco << std::endl;
	try
	{
		paco.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << paco << std::endl;
	try
	{
		paco.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << paco << std::endl;
	std::cout << "===== Creating a bureaucrat with a grade of 151 =====" << std::endl;
	try
	{
		Bureaucrat	pedro("Pedro", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===== Creating a bureaucrat with a grade of 0 =====" << std::endl;
	try
	{
		Bureaucrat	carlos("Carlos", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}