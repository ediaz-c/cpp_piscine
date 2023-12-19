/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:33:04 by erick             #+#    #+#             */
/*   Updated: 2023/12/18 23:16:12 by ediaz--c         ###   ########.fr       */
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
	PrintStringToUpper((char *)"* LOUD AND UNBEARABLE FEEDBACK NOISE *");
}

int	main(int ac, char *av[])
{
	if (ac < 2)
		OneArg();
	else
		for (int i = 1; av[i]; i++)
			PrintStringToUpper(av[i]);
	std::cout << std::endl;
	return (0);
}
