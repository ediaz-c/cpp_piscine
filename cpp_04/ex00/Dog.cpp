#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << BIBlue << "Dog constructor called." << Color_off << std::endl;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << BIBlue << "Dog destructor called." << Color_off << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
	std::cout << BIBlue << "Dog copy constructor called." << Color_off << std::endl;
	*this = copy;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << BIBlue << "Dog assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << BIBlue << "Woof!" << Color_off << std::endl;
}