#include "ClapTrap.hpp"
#include <iostream>

void	printClapTrap(ClapTrap& clapTrap)
{
	std::cout << BIBlue << clapTrap << Color_off << std::endl;
}

int	main(void)
{
	ClapTrap	bob("Bob");
	std::cout << std::endl;
	printClapTrap(bob);
	std::cout << BIRed << "11 attacks:" << Color_off << std::endl;
	for (int i = 0; i < 11; i++)
		bob.attack("Alice");
	printClapTrap(bob);
	std::cout << std::endl;
	std::cout << BIRed << "1 repairs:" << Color_off << std::endl;
	bob.beRepaired(1);
	printClapTrap(bob);
	std::cout << std::endl;
	std::cout << BIRed << "10 take damages:" << Color_off << std::endl;
	bob.takeDamage(10);
	printClapTrap(bob);

	bob.takeDamage(10);
	printClapTrap(bob);

	bob.beRepaired(10);
	printClapTrap(bob);
}