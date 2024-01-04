#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& copy);
		FragTrap&	operator=(const FragTrap& rhs);
		void		highFivesGuys(void);
		void		beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &os, const FragTrap &fragtrap);

#endif