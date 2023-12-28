#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->setName("anonymous");
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->_gateKeeperMode = false;
	std::cout << BIGreen << "ScavTrap default constructor" << Color_off << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << BIYellow << "ScavTrap destructor" << Color_off << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	std::cout << BIGreen << "ScavTrap constructor" << Color_off << std::endl;
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->_gateKeeperMode = false;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	std::cout << BIGreen << "ScavTrap copy constructor" << Color_off << std::endl;
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->_gateKeeperMode = false;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	this->_gateKeeperMode = !this->_gateKeeperMode;
	if (this->_gateKeeperMode)
		std::cout << BIWhite << "ScavTrap " << this->getName() << " has entered in Gate keeper mode." << Color_off << std::endl;
	else
		std::cout << BIWhite << "ScavTrap " << this->getName() << " has left Gate keeper mode." << Color_off << std::endl;
}

bool	ScavTrap::getGateKeeperMode(void) const
{
	return (this->_gateKeeperMode);
}

std::ostream&	operator<<(std::ostream& os, const ScavTrap& scavtrap)
{
	os << "ScavTrap " << scavtrap.getName() << " has " << scavtrap.getHitPoints() << " hit points, " << scavtrap.getEnergyPoints() << " energy points and " << scavtrap.getAttackDamage() << " attack damage." << std::endl;
	os << "Gate keeper mode: " << (scavtrap.getGateKeeperMode() ? "ON" : "OFF") << std::endl;
	return (os);
}