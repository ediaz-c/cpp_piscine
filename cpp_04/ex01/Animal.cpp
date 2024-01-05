#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << BIBlue << "Animal constructor called." << Color_off << std::endl;
	this->setType("Animal");
}

Animal::~Animal()
{
	std::cout << BIBlue << "Animal destructor called." << Color_off << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << BIBlue << "Animal copy constructor called." << Color_off << std::endl;
	*this = copy;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << BIBlue << "Animal assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << BIBlue << "Animal makeSound() called." << Color_off << std::endl;
}