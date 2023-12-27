#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point();
		~Point();

		Point(Point const &cpy);
		Point(Fixed const x, Fixed const y);

		Point & operator=(Point const &equal);

		Fixed getX(void) const;
		Fixed getY(void) const;
};


#endif