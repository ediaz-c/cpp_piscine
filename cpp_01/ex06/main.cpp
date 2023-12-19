/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:36:26 by erick             #+#    #+#             */
/*   Updated: 2023/10/28 13:50:43 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	toUpper(std::string level)
{
	for (size_t i = 0; i < level.length(); i++)
		level[i] = std::toupper(level[i]);
	return (level);
}

int	main(int ac, char *av[])
{
	Harl	paco;
	std::string	lvl;
	if (ac != 2)
	{
		std::cout << "USE: ./harlFilter <DEBUG/INFO/WARNING/ERROR>" << std::endl;
		return 1;
	}
	paco.complain(toUpper(av[1]));
}