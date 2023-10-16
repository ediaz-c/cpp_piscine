/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:38:31 by erick             #+#    #+#             */
/*   Updated: 2023/10/16 15:48:38 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_lastIndex = -1;
}

PhoneBook::~PhoneBook(void)
{
	
}

int	PhoneBook::_getIndex(void)
{
	_lastIndex++;
	if (_lastIndex == 8)
		_lastIndex = 0;
	if (this->_contacts[_lastIndex].isEmpty() == false)
	{
		std::cout << BRed"Deleting contact " Color_off << _lastIndex + 1 << std::endl;
	}
		this->_contacts[_lastIndex].remove();
	return (_lastIndex);
}

void	PhoneBook::addContact(void)
{
	std::string	input;
	int	i;

	i = _getIndex();
	this->_contacts[i].setFirstName();
	this->_contacts[i].setLastName();
	this->_contacts[i].setNickname();
	this->_contacts[i].setPhoneNumber();
	this->_contacts[i].setDarkestSecret();
	std::cout << std::endl;
}

void	PhoneBook::searchContact(void)
{
	std::string	i;
	int			index;
	
	if (this->_contacts[0].isEmpty())
	{
		std::cout << BRed"Table empty" Color_off << std::endl;
		return ;
	}
	_printTable();
	while(true)
	{
		std::cout << BWhite"Ingrese en indice del contacto: " Color_off;
		std::getline(std::cin, i);
		std::cout << std::endl;
		index = atoi(i.c_str());
		if (index <= 0 || index > 8)
			std::cout << BRed "Index invalid" Color_off << std::endl;
		else if (this->_contacts[index - 1].isEmpty())
			std::cout << BRed "Index empty" Color_off << std::endl;
		else
			break ;
	}
	_printContact(index - 1);
}

void	PhoneBook::_printTable(void)
{
	std::cout << TABLE;
	for (unsigned long i = 0; i < 8; i++)
	{
		if (this->_contacts[i].isEmpty())
			continue ;
		_contactTable(i);
		std::cout << BR;
	}
	std::cout << std::endl;
}

void	PhoneBook::_printContact(int i)
{
	std::cout << BBlue"FIRST NAME -> " Color_off << this->_contacts[i].getFirstName() << std::endl;
	std::cout << BBlue"LAST NAME -> " Color_off << this->_contacts[i].getLastName() << std::endl;
	std::cout << BBlue"NICKNAME -> " Color_off << this->_contacts[i].getNickname() << std::endl;
	std::cout << BBlue"PHONE NUMBER -> " Color_off << this->_contacts[i].getPhoneNumber() << std::endl;
	std::cout << BBlue"DARK SECRET -> " Color_off << this->_contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::_contactTable(int index)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	row;

	firstname = _cellTable(this->_contacts[index].getFirstName());
	lastname = _cellTable(this->_contacts[index].getLastName());
	nickname = _cellTable(this->_contacts[index].getNickname());
	std::cout << PIPE << std::setw(10) << index + 1 << PIPE;
	std::cout << std::setw(10) << firstname << PIPE;
	std::cout << std::setw(10) << lastname << PIPE;
	std::cout << std::setw(10) << nickname << PIPE << std::endl;
}

std::string	PhoneBook::_cellTable(std::string str)
{
	std::string	result;

	if (str.length() < 10)
		return (str);
	return (str.substr(0, 9)) + PT;
}