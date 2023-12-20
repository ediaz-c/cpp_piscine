/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:33:04 by erick             #+#    #+#             */
/*   Updated: 2023/12/20 18:21:04 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	PrintStringToUpper(char *str)
{
	int i = 0;

	while (str[i])
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

void	OneArg(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

int	main(int ac, char *av[])
{
	if (ac < 2)
		OneArg();
	else
	{
		for (int i = 1; av[i]; i++)
			PrintStringToUpper(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
