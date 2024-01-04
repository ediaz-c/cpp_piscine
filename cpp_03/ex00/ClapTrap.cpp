#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("anonymous"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << BIGreen << "ClapTrap " << this->_name << " is born! (Default constructor)" << Color_off << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << BIYellow << "ClapTrap " << this->_name << " is dead! (destructor)" << Color_off << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << BIGreen << "ClapTrap " << this->_name << " is born! (constructor)" << Color_off << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy): _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << BIGreen << "ClapTrap " << this->_name << " is born! (Copy constructor)" << Color_off << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << BIWhite << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << Color_off << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << BIWhite << this->_name << " has no energy points!" << Color_off << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << BIWhite << this->_name << " takes " << amount << " points of damage!" << Color_off << std::endl;
		this->_hitPoints -= amount;
	}
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << BIWhite << this->_name << " is already dead!" << Color_off << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() > 0)
	{
		if (this->_energyPoints > 0)
		{
			if (this->_hitPoints < 10)
			{
				std::cout << BIWhite << this->_name << " is repaired by " << amount << " points!" << Color_off << std::endl;
				this->_hitPoints += amount;
				this->_energyPoints--;
			}
			else
				std::cout << BIWhite << this->_name << " is already at full health!" << Color_off << std::endl;
		}
		else
			std::cout << BIWhite << this->_name << " has no energy points!" << Color_off << std::endl;
	}
	else
		std::cout << BIWhite << this->_name << " is already dead!" << Color_off << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

std::ostream&	operator<<(std::ostream& os, const ClapTrap& clapTrap)
{
	os << "Name: " << clapTrap.getName() << " HP: " << clapTrap.getHitPoints() << " EP: " << clapTrap.getEnergyPoints() << " AD: " << clapTrap.getAttackDamage() << std::endl;
	return (os);
}