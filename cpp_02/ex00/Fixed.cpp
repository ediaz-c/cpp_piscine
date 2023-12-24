#include "Fixed.hpp"

const int Fixed::_bitsFract = 8;

// Constructor por defecto
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// Constructor de copia
Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed &Fixed::operator=(Fixed const &equal)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &equal)
	{
		this->_valueFixed = equal.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_valueFixed >> Fixed::_bitsFract);
}

void	Fixed::setRawBits(int const value)
{
	this->_valueFixed = value << Fixed::_bitsFract;
}