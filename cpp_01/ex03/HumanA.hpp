/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:47:03 by erick             #+#    #+#             */
/*   Updated: 2023/10/25 16:51:58 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	name_;
	Weapon		&weapon_;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack(void);
};

#endif