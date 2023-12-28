#include "DiamondTrap.hpp"

void	printDiamondTrap(DiamondTrap& diamondtrap)
{
	std::cout << std::endl;
	std::cout << diamondtrap << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	DiamondTrap	diamondtrap("Piter");
	printDiamondTrap(diamondtrap);
	diamondtrap.attack("Vasya");
	diamondtrap.takeDamage(10);
	diamondtrap.beRepaired(10);
	printDiamondTrap(diamondtrap);
	diamondtrap.whoAmI();
	return (0);
}