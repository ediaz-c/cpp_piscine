#include "Point.hpp"

Point::Point() : _x(0), _y(0){}
Point::~Point(){}

Point::Point(Point const &cpy) : _x(cpy._x), _y(cpy._y){}
Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y){}

Point &Point::operator=(Point const &equal)
{
	if (this != &equal)
	{
		this->_y = equal._y;
		this->_x = equal._x;
	}
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->_x);
}

Fixed Point::getY(void) const
{
	return (this->_y);
}