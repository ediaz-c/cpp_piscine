/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:14:22 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/12/26 15:19:50 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
class Fixed
{
private:
	int					_valueFixed;
	static const int	_bitsFract;
public:
	Fixed();
	~Fixed();

	Fixed(Fixed const &cpy);
	Fixed &operator=(Fixed const &equal);
	int getRawBits(void) const;
	void setRawBits (int const value);
};

#endif