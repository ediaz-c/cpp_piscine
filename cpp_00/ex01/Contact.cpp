/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:48:15 by erick             #+#    #+#             */
/*   Updated: 2023/10/16 11:45:20 by erick            ###   ########.fr       */
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

	while (true)
	{
		std::cout << FIRSTNAME;
		std::getline(std::cin, input);
		if (input != "")
			break ;
		else
			std::cout << "Input empty" << std::endl;
	}
	this->_firstName = input;
}

void	Contact::setLastName(void)
{
	std::string	input;

	while (true)
	{
		std::cout << LASTNAME;
		std::getline(std::cin, input);
		if (input != "")
			break ;
		else
			std::cout << "Input empty" << std::endl;
	}
	this->_lastName = input;
}

void	Contact::setNickname(void)
{
	std::string	input;

	while (true)
	{
		std::cout << NICKNAME;
		std::getline(std::cin, input);
		if (input != "")
			break ;
		else
			std::cout << "Input empty" << std::endl;
	}
	this->_nickname = input;
}

void	Contact::setPhoneNumber(void)
{
	std::string	input;

	while (true)
	{
		std::cout << PHONE;
		std::getline(std::cin, input);
		if (input != "")
			break ;
		else
			std::cout << "Input empty" << std::endl;
	}
	this->_phoneNumber = input;
}

void	Contact::setDarkestSecret(void)
{
	std::string	input;

	while (true)
	{
		std::cout << SECRET;
		std::getline(std::cin, input);
		if (input != "")
			break ;
		else
			std::cout << "Input empty" << std::endl;
	}
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
