/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:38:31 by erick             #+#    #+#             */
/*   Updated: 2023/10/15 12:02:42 by erick            ###   ########.fr       */
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
		std::cout << "Deleting contact " << this->_contacts[_lastIndex].getFirstName() << std::endl;
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
}