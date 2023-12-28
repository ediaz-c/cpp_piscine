#include "FragTrap.hpp"
// Path: cpp_03/ex02/FragTrap.cpp

FragTrap::FragTrap(void) : ClapTrap()
{
	this->setName("anonymous");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << BIGreen << "FragTrap default constructor" << Color_off << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << BIYellow << "FragTrap destructor" << Color_off << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << BIGreen << "FragTrap constructor" << Color_off << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << BIGreen << "FragTrap copy constructor" << Color_off << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << BIWhite << "     _        " << Color_off << std::endl;
	std::cout << BIWhite << "   _· ·_      " << Color_off << std::endl;
	std::cout << BIWhite << " _| | | |     " << Color_off << std::endl;
	std::cout << BIWhite << "| | | | |     " << Color_off << std::endl;
	std::cout << BIWhite << "| | | | |     " << Color_off << std::endl;
	std::cout << BIWhite << "| i · i | ,_, " << Color_off << std::endl;
	std::cout << BIWhite << "|       |/ /  " << Color_off << std::endl;
	std::cout << BIWhite << "|     ,_· /   " << Color_off << std::endl;
	std::cout << BIWhite << "|    ;    |   " << Color_off << std::endl;
	std::cout << BIWhite << "|        /    " << Color_off << std::endl;
	std::cout << BIWhite << " \\______/     " << Color_off << std::endl;
	std::endl(std::cout);
	std::cout << BIWhite << this->getName() << " says: \"High five!\"" << Color_off << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const FragTrap& fragtrap)
{
	os << BIBlue << "FragTrap " << fragtrap.getName() << " has " << fragtrap.getHitPoints() << " hit points, " << fragtrap.getEnergyPoints() << " energy points and " << fragtrap.getAttackDamage() << " attack damage." << Color_off << std::endl;
	return (os);
}