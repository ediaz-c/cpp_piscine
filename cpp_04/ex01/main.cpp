#include "Cat.hpp"
#include "Dog.hpp"
#define ANIMAL_NUMBER 100
void	showLeaks(void)
{
	system("leaks -q animal");
}

void	mainTest(void)
{
	std::cout << BIWhite << "------------------------------" << Color_off << std::endl;
	std::cout << BIWhite << "Main subject tests" << Color_off << std::endl;
	std::cout << BIGreen << "Dog constructor" << Color_off << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;
	std::cout << BIGreen << "Cat constructor" << Color_off << std::endl;
	const Animal* cat = new Cat();
	std::cout << std::endl;

	std::cout << BIGreen << "Dog destructor" << Color_off << std::endl;
	delete dog;
	std::cout << std::endl;
	std::cout << BIGreen << "Cat destructor" << Color_off << std::endl;
	delete cat;
	std::cout << BIWhite << "------------------------------" << Color_off << std::endl;
}

void	arrayTest(void)
{
	Animal	*animals[ANIMAL_NUMBER];
	std::cout << BIWhite << "Array subject tests" << Color_off << std::endl;
	std::cout << BIGreen << "Constructors" << Color_off << std::endl;
	for (int i = 0; i < ANIMAL_NUMBER; i++)
	{
		std::cout << i + 1 << ": ";
		if (i < (ANIMAL_NUMBER / 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << BIGreen << "Destructors" << Color_off << std::endl;
	for (int i = 0; i < ANIMAL_NUMBER; i++)
	{
		std::cout << i + 1 << ": ";
		delete animals[i];
		std::cout << std::endl;
	}
}

void	myTest(void)
{
	// Constructors
	std::cout << BIWhite << "My tests" << Color_off << std::endl;
	std::cout << BIGreen << "Dog1 constructor" << Color_off << std::endl;
	Dog	*dog1 = new Dog();
	std::cout << std::endl;
	std::cout << BIGreen << "Dog2 constructor" << Color_off << std::endl;
	Dog *dog2 = new Dog();
	std::cout << std::endl;
	std::cout << BIGreen << "Cat constructor" << Color_off << std::endl;
	Cat	*cat = new Cat();
	std::cout << std::endl;

	// Dog1 get idea
	std::cout << BIGreen << "Dog1 get idea" << Color_off << std::endl;
	std::cout << BIWhite << "Dog1 -> idea 3" << Color_off << std::endl;
	std::cout << BIYellow << dog1->getIdeas(3) << Color_off << std::endl;
	std::cout << std::endl;

	// Dog1 set idea
	std::cout << BIGreen << "Dog1 set idea" << Color_off << std::endl;
	std::cout << BIWhite << "Dog1 -> set idea 3 to 'Melocoton'" << Color_off << std::endl;
	dog1->setIdeas("Melocoton", 3);
	std::cout << BIYellow << dog1->getIdeas(3) << Color_off << std::endl;
	std::cout << std::endl;

	// Dog2
	std::cout << BIGreen << "Dog2 assignation operator, Dog2 = Dog1" << Color_off << std::endl;
	*dog2 = *dog1;
	std::cout << BIWhite << "Dog2 -> get idea 3" << Color_off << std::endl;
	std::cout << BIYellow << dog2->getIdeas(3) << Color_off << std::endl;
	std::cout << std::endl;
	std::cout << BIGreen << "Cat get idea" << Color_off << std::endl;
	std::cout << BIWhite << "Cat idea 56" << Color_off << std::endl;
	std::cout << BIYellow << cat->getIdeas(56) << Color_off << std::endl;
	std::cout << std::endl;

	std::cout << BIGreen << "Cat set idea" << Color_off << std::endl;
	std::cout << BIWhite << "Cat -> set idea 56 to 'Pera'" << Color_off << std::endl;
	cat->setIdeas("Pera", 56);
	std::cout << BIYellow << cat->getIdeas(56) << Color_off << std::endl;
	std::cout << std::endl;

	std::cout << BIGreen << "Dog destructor" << Color_off << std::endl;
	delete dog1;
	delete dog2;
	std::cout << std::endl;

	std::cout << BIGreen << "Cat destructor" << Color_off << std::endl;
	delete cat;
}

std::string	getInput(std::string prompt)
{
	std::string input;
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof() || std::cin.fail())
			exit(0);
		else if (input.length() == 0)
			std::cout << BIRed << "Error: empty input." << Color_off << std::endl;
		else
			break ;
	}
	return (input);

}

int	main(void)
{
	atexit(showLeaks);
	std::string test;
	std::cout << BIWhite << "Select test: " << Color_off << std::endl;
	std::cout << BIBlue << "[1] main test\n[2] array test\n[3] my test" << Color_off << std::endl;
	test = getInput("Test: ");
	if (test == "1")
		mainTest();
	else if (test == "2")
		arrayTest();
	else if (test == "3")
		myTest();
	else
	{
		std::cout << BIRed << "Error: invalid input." << Color_off << std::endl;
		exit(1);
	}
	return (0);
}