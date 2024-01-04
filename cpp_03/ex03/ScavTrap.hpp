#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool	_gateKeeperMode;
	public:
		ScavTrap(void);
		~ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& copy);
		ScavTrap&	operator=(const ScavTrap& rhs);
		void		guardGate(void);
		bool		getGateKeeperMode(void) const;
		void		beRepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream& os, const ScavTrap& scavtrap);

#endif