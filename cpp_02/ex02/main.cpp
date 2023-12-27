#include <iostream>
#include "Fixed.hpp"

std::string boolToString(bool value) {
	return value ? "true" : "false";
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(42);
	Fixed d(42);
	Fixed const e(42.42f);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << std::endl;
	std::cout << BIGreen << "Sobrecarga de operadores" << Color_off << std::endl;
	std::cout << BIBlue << "Comparacion:" << Color_off << std::endl;
	std::cout << "a(" << a << ")\t > \t b(" << b << "):\t" << boolToString(a > b) << std::endl;
	std::cout << "a(" << a << ")\t < \t b(" << b << "):\t" << boolToString(a < b) << std::endl;
	std::cout << "a(" << a << ")\t >=\t b(" << b << "):\t" << boolToString(a >= b) << std::endl;
	std::cout << "a(" << a << ")\t <=\t b(" << b << "):\t" << boolToString(a <= b) << std::endl;
	std::cout << "a(" << a << ")\t ==\t b(" << b << "):\t" << boolToString(a == b) << std::endl;
	std::cout << "c(" << c << ")\t ==\t d(" << d << "):\t\t" << boolToString(c == d) << std::endl;
	std::cout << "a(" << a << ")\t !=\t b(" << b << "):\t" << boolToString(a != b) << std::endl;
	std::cout << "c(" << c << ")\t !=\t d(" << d << "):\t\t" << boolToString(c != d) << std::endl;
	std::cout << std::endl;
	std::cout<< BIBlue << "Operaciones aritmeticas:" << Color_off << std::endl;
	std::cout << "a(" << a << ")\t + \t b(" << b << "):\t" << a + b << std::endl;
	std::cout << "c(" << c << ")\t + \t b(" << b << "):\t" << c + b << std::endl;
	std::cout << "a(" << a << ")\t - \t b(" << b << "):\t" << a - b << std::endl;
	std::cout << "c(" << c << ")\t - \t d(" << d << "):\t\t" << c - d << std::endl;
	std::cout << "a(" << a << ")\t * \t b(" << b << "):\t" << a * b << std::endl;
	std::cout << "c(" << c << ")\t * \t d(" << d << "):\t\t" << c * d << std::endl;
	std::cout << "a(" << a << ")\t / \t b(" << b << "):\t" << a / b << std::endl;
	std::cout << "c(" << c << ")\t / \t a(" << a << "):\t" << c / a << std::endl;
	std::cout << "c(" << c << ")\t / \t d(" << d << "):\t\t" << c / d << std::endl;
	std::cout << std::endl;
	std::cout<< BIBlue << "Operaciones unarias:" << Color_off << std::endl;
	std::cout << "a(" << a << ")pre\t\t ++ \t:\t" << ++a << std::endl;
	std::cout << "a(" << a << ")pre\t\t -- \t:\t" << --a << std::endl;
	std::cout << "a(" << a << ")post\t ++ \t:\t" << a++ << std::endl;
	std::cout << "a(" << a << ")post\t -- \t:\t" << a-- << std::endl;
	std::cout << "a(" << a << ")\t" << std::endl;
	std::cout << "Max y Min:" << std::endl;
	std::cout << "max(a, b):\t" << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b):\t" << Fixed::min(a, b) << std::endl;
	std::cout << "max(c, b):\t" << Fixed::max(c, b) << std::endl;
	std::cout << "min(c, b):\t" << Fixed::min(c, b) << std::endl;
	std::cout << "max(b, e):\t" << Fixed::max(b, e) << std::endl;
	std::cout << "min(b, e):\t" << Fixed::min(b, e) << std::endl;

	return 0;
}