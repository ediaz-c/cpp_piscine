#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << BIBlue << "Cat constructor called." << Color_off << std::endl;
	this->setType("Cat");
}

Cat::~Cat()
{
	std::cout << BIBlue << "Cat destructor called." << Color_off << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << BIBlue << "Cat copy constructor called." << Color_off << std::endl;
	*this = copy;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << BIBlue << "Cat assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << BIBlue << "Meow!!" << Color_off << std::endl;
}