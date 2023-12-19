/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:01:32 by erick             #+#    #+#             */
/*   Updated: 2023/11/07 19:16:57 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bitsFract = 8;

Fixed::Fixed(void)
{
	std::cout<< "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed & Fixed::operator=(const Fixed &equal)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_valueFixed = equal.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_valueFixed >> Fixed::_bitsFract);
}

void Fixed::setRawBits(const int value)
{
	this->_valueFixed = value << Fixed::_bitsFract;
}