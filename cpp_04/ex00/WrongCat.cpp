#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << BIBlue << "WrongCat constructor called." << Color_off << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << BIBlue << "WrongCat destructor called." << Color_off << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
	std::cout << BIBlue << "WrongCat copy constructor called." << Color_off << std::endl;
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << BIBlue << "WrongCat assignation operator called." << Color_off << std::endl;
	if (this != &rhs)
		this->setType(rhs.getType());
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << BIBlue << "MEEEEEEEEEOOOOOOOOOOOOOOOWWWWWWWWW!!!!!!!!!" << Color_off << std::endl;
}