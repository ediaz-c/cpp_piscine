/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:19:25 by erick             #+#    #+#             */
/*   Updated: 2023/12/21 11:26:12 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::cout << "===== DEBUG LEVEL =====" << std::endl;
	harl.complain("DEBUG");
	std::cout << "===== INFO LEVEL =====" << std::endl;
	harl.complain("INFO");
	std::cout << "===== WARNING LEVEL =====" << std::endl;
	harl.complain("WARNING");
	std::cout << "===== ERROR LEVEL =====" << std::endl;
	harl.complain("ERROR");
}