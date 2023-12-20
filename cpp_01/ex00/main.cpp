/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:18:22 by erick             #+#    #+#             */
/*   Updated: 2023/12/19 17:11:05 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

std::string	getName(std::string promt)
{
	std::string	name;
	while (true)
	{
		std::cout << "\033[1;94m" << promt << ": \033[0m";
		std::getline(std::cin, name);
		if (std::cin.eof())
			exit(0);
		else if (name.empty())
			std::cout << "\033[1;91mName can't be empty\033[0m" << std::endl;
		else
			break ;
	}
	return (name);
}

void	heapZombie(void)
{
	std::string	name;
	name = getName("Name of zombie [heap]");
	Zombie* zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}

void	stackZombie(void)
{
	std::string	name;
	name = getName("Name of zombie [stack]");
	randomChump(name);
}

int	main(void)
{
	heapZombie();
	std::cout << "---------------------------" << std::endl;
	stackZombie();
	std::cout << "---------------------------" << std::endl;
}