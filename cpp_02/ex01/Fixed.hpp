/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:14:22 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/12/26 15:32:54 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif