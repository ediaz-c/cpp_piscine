/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:19:34 by erick             #+#    #+#             */
/*   Updated: 2023/10/16 15:54:03 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	
	std::cout << WELCOME << std::endl;
	while (true)
	{
		std::cout << COMMANDS;
		std::getline(std::cin, cmd);
		for(int i = 0; i < (int)cmd.length(); i++)
			cmd[i] = std::toupper(cmd[i]);
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << BRed"Comando invalido " Color_off << cmd << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
