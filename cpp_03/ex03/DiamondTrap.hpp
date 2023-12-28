#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap&	operator=(const DiamondTrap& rhs);
		void			attack(const std::string& target);
		void			whoAmI(void);
		std::string		getName(void) const;
};

std::ostream &operator<<(std::ostream &os, const DiamondTrap &diamondtrap);
#endif