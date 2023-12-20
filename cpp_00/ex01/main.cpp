#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void	cmdToUpper(std::string *command)
{
	int	i;

	i = 0;
	while ((*command)[i])
	{
		(*command)[i] = toupper((*command)[i]);
		i++;
	}
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	while (true)
	{
		std::cout << WHITE "Enter a command: " RESET;
		std::getline(std::cin, command);
		std::cout << std::endl;
		cmdToUpper(&command);
		if (command == "EXIT" || std::cin.eof())
		{
			std::cout << GREEN << "Exit" << RESET << std::endl;
			break ;
		}
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else
			std::cout << RED "Invalid command" RESET << std::endl;
	}
}