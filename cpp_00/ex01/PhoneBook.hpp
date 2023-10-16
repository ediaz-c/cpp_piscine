/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:06:13 by erick             #+#    #+#             */
/*   Updated: 2023/10/16 15:17:33 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	searchContact(void);
	
	private:
		Contact		_contacts[8];
		int			_lastIndex;
		int			_getIndex(void);
		void		_printTable(void);
		void		_contactTable(int i);
		void		_printContact(int i);
		std::string	_cellTable(std::string str);
		
};

#endif