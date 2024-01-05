#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << BIBlue << "AAnimal constructor called." << Color_off << std::endl;
	this->setType("Animal");
}

AAnimal::~AAnimal()
{
	std::cout << BIBlue << "AAnimal destructor called." << Color_off << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	std::cout << BIBlue << "AAnimal copy constructor called." << Color_off << std::endl;
	*this = copy;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << BIBlue << "AAnimal assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << BIBlue << "AAnimal makeSound() called." << Color_off << std::endl;
}