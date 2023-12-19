#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

# define BLACK "\033[1;90m"
# define RED "\033[1;91m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"
# define BLUE "\033[1;94m"
# define PURPLE "\033[1;95m"
# define CYAN "\033[1;96m"
# define WHITE "\033[1;97m"
# define RESET "\033[0m"

class PhoneBook
{
	private:
		Contact	_contacts[CONTACT_FIELDS];
		int		_numContacts;
		int		_lastIndex;
		int		_numContactsFilled;
		void	_printCell(std::string str);
	public:
		void	addContact(void);
		void	searchContact(void);
		void	getContact(int index);
		PhoneBook(void);
		~PhoneBook(void);
};

#endif