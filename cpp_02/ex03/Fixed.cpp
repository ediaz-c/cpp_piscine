#include "Fixed.hpp"

const int Fixed::_bitsFract = 8;

// Constructor por defecto
Fixed::Fixed(void)
{
	this->setRawBits(0);
}

// Constructor de copia
Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
}

// Constructor con parámetro int
Fixed::Fixed(int const raw)
{
	this->setRawBits(raw);
}

// Constructor con parámetro float
Fixed::Fixed(float const raw)
{
	this->setRawBits(raw);
}

// Destructor
Fixed::~Fixed(void)
{
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
void	Fixed::setRawBits(int const raw)
{
	this->_valueFixed = raw << Fixed::_bitsFract;
}
//	set float to Fixed
void	Fixed::setRawBits(float const raw)
{
	this->_valueFixed = std::roundf(raw * (1 << Fixed::_bitsFract));
}

// Operadores de comparacion

bool Fixed::operator>(Fixed const &other)
{
	return (_valueFixed > other._valueFixed);
}

bool Fixed::operator<(Fixed const &other)
{
	return (_valueFixed < other._valueFixed);
}

bool Fixed::operator>=(Fixed const &other)
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other)
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other)
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other)
{
	return (this->getRawBits() != other.getRawBits());
}

// Operador de asignación
Fixed &Fixed::operator=(Fixed const &equal)
{
	if (this != &equal)
	{
		this->_valueFixed = equal.getRawBits();
	}
	return (*this);
}


Fixed Fixed::operator+(Fixed const &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(Fixed const &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(Fixed const &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(Fixed const &other) const
{
	if (other.toFloat() == 0)
	{
		std::cerr << "Error: division by zero" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++(void)
{
	_valueFixed += (1 << _bitsFract);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_valueFixed += (1 << _bitsFract);
	return temp;
}

Fixed& Fixed::operator--(void)
{
	_valueFixed -= (1 << _bitsFract);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_valueFixed -= (1 << _bitsFract);
	return (temp);
}

Fixed& Fixed::min(Fixed &first, Fixed &second)
{
	if (first._valueFixed < second._valueFixed)
		return (first);
	return(second);
}

const Fixed& Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first._valueFixed < second._valueFixed)
		return (first);
	return(second);
}

Fixed& Fixed::max(Fixed &first, Fixed &second)
{
	if (first._valueFixed > second._valueFixed)
		return (first);
	return(second);
}

const Fixed& Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first._valueFixed > second._valueFixed)
		return (first);
	return(second);
}

// Operador de inserción de flujo
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
