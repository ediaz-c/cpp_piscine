/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:59:42 by erick             #+#    #+#             */
/*   Updated: 2023/12/20 12:08:30 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB with name " << this->_name << " created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB with name " << this->_name << " deleted" << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}

void	HumanB::attack(void)
{
	if (this->weapon == NULL)
		std::cout << this->_name << " attacks with his hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}