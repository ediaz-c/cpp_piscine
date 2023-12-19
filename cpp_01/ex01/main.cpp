/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:49:03 by erick             #+#    #+#             */
/*   Updated: 2023/10/18 15:24:40 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int			horde_nb;
	std::string	name;
	std::string	horde_str;
	Zombie		*horde;

	std::cout << BIGreen"===== ZOMBIE HORDER =====" Color_off << std::endl;
	while (true)
	{
		std::cout << BIBlue"Write number of zombies: " Color_off;
		std::getline(std::cin, horde_str);
		horde_nb = atoi(horde_str.c_str());
		if (horde_nb != 0)
			break ;
		else
			std::cout << BIRed"Number invalid" Color_off << std::endl;
	}
	while (true)
	{
		std::cout << BIBlue"Write name of zombies: " Color_off;
		std::getline(std::cin, name);
		if (name != "")
			break ;
		else
			std::cout << BIRed"Name empty" Color_off << std::endl;
	}
	std::cout << BIPurple"ALOCATED " << horde_str << " ZOMBIES" Color_off << std::endl;
	horde = zombieHorde(horde_nb, name);
	std::cout << std::endl;
	for (int i = 0; i < horde_nb; i++)
		horde[i].announce();
	std::cout << std::endl;
	delete[] horde;
}