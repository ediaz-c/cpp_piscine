#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

# define Color_off "\033[0m"       //Color off

# define BIBlack "\033[1;90m"      //Black
# define BIRed "\033[1;91m"        //Red
# define BIGreen "\033[1;92m"      //Green
# define BIYellow "\033[1;93m"     //Yellow
# define BIBlue "\033[1;94m"       //Blue
# define BIPurple "\033[1;95m"     //Purple
# define BICyan "\033[1;96m"       //Cyan
# define BIWhite "\033[1;97m"      //White

class Fixed
{
	private:
		int					_valueFixed;
		static const int	_bitsFract;
	public:
		Fixed();
		~Fixed();

		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &cpy);

		Fixed & operator=(Fixed const &equal);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits (int const value);
		void setRawBits (float const value);

		// Comparison operators
		bool operator>(Fixed const &other);
		bool operator<(Fixed const &other);
		bool operator>=(Fixed const &other);
		bool operator<=(Fixed const &other);
		bool operator==(Fixed const &other);
		bool operator!=(Fixed const &other);

		// Arithmetic operators
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;

		// Increments and decrements
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		// Extra functions
		static Fixed& min(Fixed &first, Fixed &second);
		static const Fixed& min(Fixed const &first, Fixed const &second);
		static Fixed& max(Fixed &first, Fixed &second);
		static const Fixed& max(Fixed const &first, Fixed const &second);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif