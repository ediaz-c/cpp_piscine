/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:36:26 by erick             #+#    #+#             */
/*   Updated: 2023/12/21 11:38:51 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	errorArg(void)
{
	std::cout << "USE: ./harlFilter <DEBUG/INFO/WARNING/ERROR>" << std::endl;
	return (EXIT_FAILURE);
}

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
		return (errorArg());
	paco.complain(toUpper(av[1]));
}