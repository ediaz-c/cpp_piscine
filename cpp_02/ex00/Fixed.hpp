/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:14:22 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/11/07 19:15:42 by erick            ###   ########.fr       */
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
	Fixed & operator=(Fixed const & equal);
	int getRawBits(void) const;
	void setRawBits (int const value);
};

#endif