#include "Fixed.hpp"

const int Fixed::_bitsFract = 8;

// Constructor por defecto
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

// Constructor de copia
Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

// Constructor con parámetro int
Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value);
}

// Constructor con parámetro float
Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(value);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// Operador de asignación
Fixed &Fixed::operator=(Fixed const &equal)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &equal)
	{
		this->_valueFixed = equal.getRawBits();
	}
	return (*this);
}

// Operador de inserción de flujo
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

// Conversión de tipos
//	convert Fixed to int
int	Fixed::toInt(void) const
{
	return (this->_valueFixed >> Fixed::_bitsFract);
}

//	convert Fixed to float
float Fixed::toFloat(void) const
{
	return ((float)this->_valueFixed / (float)(1 << Fixed::_bitsFract));
}

// Getters
int Fixed::getRawBits(void) const
{
	return (this->_valueFixed);
}

// Setters
//	set int to Fixed
void	Fixed::setRawBits(int const value)
{
	this->_valueFixed = value << Fixed::_bitsFract;
}
//	set float to Fixed
void	Fixed::setRawBits(float const value)
{
	this->_valueFixed = round(value * (1 << Fixed::_bitsFract));
}