/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:18:22 by erick             #+#    #+#             */
/*   Updated: 2023/10/18 13:21:49 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::string	heap;
	std::string	stack;

	Zombie* paco;
	std::cout << "\033[1;95mZombie allocated in heap\033[0m" << std::endl;
	std::cout << "\033[1;94mName of zombie [heap]: \033[0m";
	std::getline(std::cin, heap);
	std::cout << std::endl;
	paco = newZombie(heap);
	paco->announce();
	delete paco;
	std::cout << "---------------------------" << std::endl;
	std::cout << "\033[1;95mZombie allocated in stack\033[0m" << std::endl;
	std::cout << "\033[1;94mName of zombie [stack]: \033[0m";
	std::getline(std::cin, stack);
	randomChump(stack);
	std::cout << "---------------------------" << std::endl;
}