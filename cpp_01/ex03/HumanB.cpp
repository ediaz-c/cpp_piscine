/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:59:42 by erick             #+#    #+#             */
/*   Updated: 2023/10/25 17:17:15 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{
	std::cout << "HumanB with name " << this->name_ << " created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB with name " << this->name_ << " deleted" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon == NULL)
		std::cout << this->name_ << " attacks with his hands" << std::endl;
	else
		std::cout << this->name_ << " attacks with their " << this->weapon->getType() << std::endl;
}