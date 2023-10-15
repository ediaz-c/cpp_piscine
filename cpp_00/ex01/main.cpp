/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:19:34 by erick             #+#    #+#             */
/*   Updated: 2023/10/15 12:01:46 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	
	std::cout << "WELLCOME" << std::endl;
	while (true)
	{
		std::cout << "Escribe un comando [ADD], [SEARCH], [EXIT]" << std::endl;
		std::getline(std::cin, cmd);
		for(int i = 0; i < (int)cmd.length(); i++)
			cmd[i] = std::toupper(cmd[i]);
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Comando invalido" << std::endl;
	}
}