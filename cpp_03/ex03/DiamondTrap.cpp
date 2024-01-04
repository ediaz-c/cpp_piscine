#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << BIGreen << "DiamondTrap default constructor" << Color_off << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << BIYellow << "DiamondTrap destructor" << Color_off << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << BIGreen << "DiamondTrap constructor" << Color_off << std::endl;
	this->ClapTrap::setName(name + "_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
	: ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << BIGreen << "DiamondTrap copy constructor)" << Color_off << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		ClapTrap::setName(rhs._name + "_clap_name");
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() > 0)
	{
		if (this->getEnergyPoints() > 0)
		{
			if (this->getHitPoints() < 100)
			{
				std::cout << BIWhite << this->getName() << " is repaired by " << amount << " points!" << Color_off << std::endl;
				this->setHitPoints(this->getHitPoints() + amount);
				this->setEnergyPoints(this->getEnergyPoints() - 1);
				if (this->getHitPoints() > 100)
					this->setHitPoints(100);
			}
			else
				std::cout << BIWhite << this->getName() << " is already at full health!" << Color_off << std::endl;
		}
		else
			std::cout << BIWhite << this->getName() << " has no energy points!" << Color_off << std::endl;
	}
	else
		std::cout << BIWhite << this->getName() << " is already dead!" << Color_off << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << BIWhite << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << "." << Color_off << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &os, const DiamondTrap &diamondtrap)
{
	os << BIBlue << diamondtrap.getName() << " has " << diamondtrap.getHitPoints() << " hit points, " << diamondtrap.getEnergyPoints() << " energy points and " << diamondtrap.getAttackDamage() << " attack damage." << Color_off << std::endl;
	return (os);
}