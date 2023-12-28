#include <iostream>
#include <cmath>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);
// Comprobar en geogebra

std::string	boolToString(bool const boolean)
{
	if (boolean)
		return (BIGreen"true");
	return (BIRed"false");
}

int	main(void)
{
	Point a(-3, -2);
	Point b(10, 0);
	Point c(0, 13);
	Point point(-1, -3);

	std::cout << BIBlue << "    A -> " << BIRed << "X:\t" << BIGreen << a.getX() << BIRed << "\t Y:\t" << BIGreen << a.getY() << Color_off << std::endl;
	std::cout << BIBlue << "    B -> " << BIRed << "X:\t" << BIGreen << b.getX() << BIRed << "\t Y:\t" << BIGreen << b.getY() << Color_off << std::endl;
	std::cout << BIBlue << "    C -> " << BIRed << "X:\t" << BIGreen << c.getX() << BIRed << "\t Y:\t" << BIGreen << c.getY() << Color_off << std::endl;
	std::cout << BIBlue << "point -> " << BIRed << "X:\t" << BIGreen << point.getX() << BIRed << "\t Y:\t" << BIGreen << point.getY() << Color_off << std::endl;
	std::cout << std::endl;
	std::cout << BIBlue << "bsp:\t" << boolToString(bsp(a, b, c, point)) << std::endl;
	return (0);
}