/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:19:25 by erick             #+#    #+#             */
/*   Updated: 2023/10/25 18:23:18 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	silly;
	std::cout << "===== DEBUG LEVEL =====" << std::endl;
	silly.complain("DEBUG");
	std::cout << "===== INFO LEVEL =====" << std::endl;
	silly.complain("INFO");
	std::cout << "===== WARNING LEVEL =====" << std::endl;
	silly.complain("WARNING");
	std::cout << "===== ERROR LEVEL =====" << std::endl;
	silly.complain("ERROR");
}