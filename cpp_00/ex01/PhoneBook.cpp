#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_numContacts = 2;
	this->_lastIndex = 0;
	this->_numContactsFilled = 0;
}
PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(void)
{
	if (this->_numContactsFilled < this->_numContacts)
		this->_numContactsFilled++;
	if (this->_lastIndex >= this->_numContacts)
		this->_lastIndex = 0;
	this->_contacts[this->_lastIndex++].addContact();
}

void	PhoneBook::searchContact(void)
{
	int			index_int;
	std::string	index_str;

	std::cout << "|  Index   |First name|Last name | Nickname |" << std::endl;
	for (int i = 0; i < this->_numContactsFilled; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		this->_printCell(this->_contacts[i].getFirstName());
		this->_printCell(this->_contacts[i].getLastName());
		this->_printCell(this->_contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	if (this->_numContactsFilled == 0)
	{
		std::cout << RED "No contacts to display" WHITE << std::endl;
		return ;
	}
	while (true)
	{
		std::cout << WHITE "Enter an index: " RESET;
		std::getline(std::cin, index_str);
		std::cout << std::endl;
		index_int = atoi(index_str.c_str());
		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << RED "Error input" WHITE << std::endl;
			exit(0);
		}
		else if (index_int < 1 || index_int > this->_numContactsFilled)
			std::cout << RED "Invalid index" WHITE << std::endl;
		else
		{
			this->_contacts[index_int - 1].printContact();
			break ;
		}
	}
}

void	PhoneBook::_printCell(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << std::setw(10) << std::left << str << "|";
}