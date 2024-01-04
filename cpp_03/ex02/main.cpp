#include "FragTrap.hpp"
#include "ClapTrap.hpp"

void	printFragTrap(FragTrap& fragtrap)
{
	std::endl(std::cout);
	std::cout << fragtrap << std::endl;
	std::endl(std::cout);
}

int	main(void)
{
	FragTrap	fragtrap("Paco");

	printFragTrap(fragtrap);
	fragtrap.attack("a rock");
	printFragTrap(fragtrap);
	fragtrap.takeDamage(5);
	printFragTrap(fragtrap);
	fragtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	printFragTrap(fragtrap);
	fragtrap.takeDamage(100);
	printFragTrap(fragtrap);
	fragtrap.highFivesGuys();
}