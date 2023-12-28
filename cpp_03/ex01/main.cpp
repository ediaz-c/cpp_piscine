#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void	printClapTrap(ClapTrap& clapTrap)
{
	std::cout << BIBlue << clapTrap << Color_off << std::endl;
}

void	printScavTrap(ScavTrap& scavTrap)
{
	std::cout << std::endl;
	std::cout << BIBlue << scavTrap << Color_off << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ScavTrap	bob("Bob");

	std::cout << std::endl;
	printScavTrap(bob);
	
	std::cout << BIGreen << "ScavTrap using ClapTrap methods:" << Color_off << std::endl;
	std::cout << BIPurple << "Attack:" << Color_off << std::endl;
	bob.attack("a tree");
	printScavTrap(bob);
	std::cout << BIPurple << "Take damage:" << Color_off << std::endl;
	bob.takeDamage(5);
	printScavTrap(bob);
	bob.takeDamage(94);
	printScavTrap(bob);
	std::cout << BIPurple << "Be repaired:" << Color_off << std::endl;
	bob.beRepaired(5);
	printScavTrap(bob);
	std::cout << BIPurple << "New method:" << Color_off << std::endl;
	bob.guardGate();
	printScavTrap(bob);
	bob.guardGate();
	printScavTrap(bob);

	std::cout << std::endl;
	bob.takeDamage(100);
	printScavTrap(bob);
}