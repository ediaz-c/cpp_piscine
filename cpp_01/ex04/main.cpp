/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erick <erick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:37:29 by erick             #+#    #+#             */
/*   Updated: 2023/10/25 18:01:04 by erick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

void	replaceLine(std::string& line, std::string& s1, std::string& s2)
{
	size_t	pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
}

int	main(int ac, char*av[])
{
	if (ac != 4)
	{
		std::cerr << BRed"Use: " << av[0] << " <name of file> <s1> <s2>" Color_off << std::endl;
		return 1;
	}
	std::string	file = av[1];
	std::string	s1 = av[2];
	std::string s2 = av[3];

	std::ifstream	input_file(file);
	if (!input_file)
	{
		std::cerr << BRed"Error opening file " << av[1] << Color_off << std::endl;
		return 1;
	}
	std::ofstream	output_file(file + ".replace");
	if (!output_file)
	{
		std::cerr << BRed"Error creating file " << av[1] << ".replace" Color_off << std::endl;
	}
	std::string	line;
	while (std::getline(input_file, line))
	{
		replaceLine(line, s1, s2);
		output_file << line << std::endl;
	}
	input_file.close();
	output_file.close();
	std::cout << BGreen"Finish" Color_off << std::endl;
}