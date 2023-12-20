#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>

# define BLACK "\033[1;90m"
# define RED "\033[1;91m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"
# define BLUE "\033[1;94m"
# define PURPLE "\033[1;95m"
# define CYAN "\033[1;96m"
# define WHITE "\033[1;97m"
# define RESET "\033[0m"

# define CONTACT_FIELDS 8

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

		std::string	_getInput(std::string prompt);
		bool		_isNumber(std::string number);
	public:
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickname(std::string nickname);
		void		setPhoneNumber(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);
		void		addContact(void);
		void		printContact(void);
		Contact(void);
		~Contact(void);
};

#endif