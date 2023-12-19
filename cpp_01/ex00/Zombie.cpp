/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:10:35 by erick             #+#    #+#             */
/*   Updated: 2023/10/18 13:27:29 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "\033[1;92mZombie: \033[1;96m" << this->_name << "\033[1;92m created\033[0m" << std::endl;
	std::cout << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << "\033[1;92mZombie: \033[1;96m" << this->_name << "\033[1;92m deleted\033[0m" << std::endl;
	std::cout << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "\033[1;96m" << this->_name << ": \033[1;91mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
	std::cout << std::endl;
}
