/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:48:15 by erick             #+#    #+#             */
/*   Updated: 2023/10/15 12:12:08 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string	Contact::getFirstName(void)
{
	return this->_firstName;
}

std::string Contact::getLastName(void)
{
	return this->_lastName;
}

std::string Contact::getNickname(void)
{
	return this->_nickname;
}

std::string	Contact::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return this->_darkestSecret;
}

void	Contact::setFirstName(void)
{
	std::string	input;

	std::cout << "Write your first name: ";
	std::cin >> input;
	this->_firstName = input;
}

void	Contact::setLastName(void)
{
	std::string	input;
	
	std::cout << "Write your last name: ";
	std::cin >> input;
	this->_lastName = input;
}

void	Contact::setNickname(void)
{
	std::string	input;
	
	std::cout << "Write your nick name: ";
	std::cin >> input;
	this->_nickname = input;
}

void	Contact::setPhoneNumber(void)
{
	std::string	input;
	
	std::cout << "Write your phone number: ";
	std::cin >> input;
	this->_phoneNumber = input;
}

void	Contact::setDarkestSecret(void)
{
	std::string	input;
	
	std::cout << "Write your darkest secret: ";
	std::cin >> input;
	this->_darkestSecret = input;
}

bool	Contact::isEmpty(void)
{
	if (this->_firstName != "")
		return (false);
	else if (this->_lastName != "")
		return (false);
	else if (this->_nickname != "")
		return (false);
	else if (this->_phoneNumber != "")
		return (false);
	else if (this->_nickname != "")
		return (false);
	return (true);
}

void	Contact::remove(void)
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}