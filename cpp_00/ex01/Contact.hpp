/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:34:04 by erick             #+#    #+#             */
/*   Updated: 2023/10/16 11:45:26 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "includes.hpp"

class Contact
{
	public:
		Contact();
		~Contact();
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getPhoneNumber(void);
		std::string		getDarkestSecret(void);
		void			setFirstName(void);
		void			setLastName(void);
		void			setNickname(void);
		void			setPhoneNumber(void);
		void			setDarkestSecret(void);
		
		bool			isEmpty(void);
		void			remove(void);

	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
};

#endif