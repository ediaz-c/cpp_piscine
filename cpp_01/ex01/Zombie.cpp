/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:42:09 by erick             #+#    #+#             */
/*   Updated: 2023/12/19 17:30:16 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "\033[1;92mZombie created\033[0m" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "\033[1;92mZombie " << BIBlue << _name << BIGreen << " deleted\033[0m" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName(void)
{
	return(this->_name);
}

void	Zombie::announce(void)
{
	std::cout << "\033[1;96m" << this->_name << ": \033[1;91mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}