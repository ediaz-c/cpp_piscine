#include "Contact.hpp"

Contact::Contact(void)
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact(void)
{
}

std::string	Contact::_getInput(std::string prompt)
{
	std::string	str;

	while (true)
	{
		std::cout << BLUE << prompt << ": " RESET;
		std::getline(std::cin, str);
		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << RED "Error input" WHITE << std::endl;
			exit(0);
		}
		else if(str.empty())
			std::cout << YELLOW "Empty line" RESET << std::endl;
		else
			break ;
	}
	return (str);
}

void	Contact::printContact(void)
{
	std::cout << GREEN "FIRST NAME: " RESET << this->getFirstName() << std::endl;
	std::cout << GREEN "LAST NAME: " RESET << this->getLastName() << std::endl;
	std::cout << GREEN "NICKNAME: " RESET << this->getNickname() << std::endl;
	std::cout << GREEN "PHONE NUMBER: " RESET << this->getPhoneNumber() << std::endl;
	std::cout << GREEN "DARKEST SECRET: " RESET << this->getDarkestSecret() << std::endl;
}

void	Contact::addContact(void)
{
	std::cout << GREEN "ADD CONTACT" RESET << std::endl;
	this->setFirstName(this->_getInput("Enter first name"));
	this->setLastName(this->_getInput("Enter last name"));
	this->setNickname(this->_getInput("Enter nickname"));
	this->setPhoneNumber(this->_getInput("Enter phone number"));
	this->setDarkestSecret(this->_getInput("Enter darkest secret"));
	std::cout << std::endl;
}

// Setters
void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

// Getters
std::string	Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}