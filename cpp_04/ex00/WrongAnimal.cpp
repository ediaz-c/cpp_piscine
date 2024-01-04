#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
	std::cout << BIBlue << "WrongAnimal constructor called." << Color_off << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BIBlue << "WrongAnimal destructor called." << Color_off << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << BIBlue << "WrongAnimal copy constructor called." << Color_off << std::endl;
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << BIBlue << "WrongAnimal assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << BIBlue << "WrongAnimal makeSound() called." << Color_off << std::endl;
}