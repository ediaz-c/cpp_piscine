/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:50:12 by erick             #+#    #+#             */
/*   Updated: 2023/10/25 17:16:09 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon)
{
	std::cout << "HumanA with name " << this->name_ << " with weapon " << this->weapon_.getType() << " created" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA with name " << this->name_ << " deleted" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name_ << " attacks with their " << this->weapon_.getType() << std::endl;
}