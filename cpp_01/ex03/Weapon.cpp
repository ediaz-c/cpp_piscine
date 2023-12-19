/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:40:19 by erick             #+#    #+#             */
/*   Updated: 2023/10/25 17:13:23 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
	std::cout << "Weapon type " << this->type_ << " created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon type " << this->type_ << " deleted" << std::endl;
}

void Weapon::setType(std::string type)
{
	this->type_ = type;
}

std::string const &Weapon::getType(void)
{
	return this->type_;
}