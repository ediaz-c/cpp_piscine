/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:40:19 by erick             #+#    #+#             */
/*   Updated: 2023/12/19 23:44:21 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Weapon type " << this->_type << " created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon type " << this->_type << " deleted" << std::endl;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const &Weapon::getType(void)
{
	return this->_type;
}