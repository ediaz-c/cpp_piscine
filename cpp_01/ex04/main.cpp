/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:37:29 by erick             #+#    #+#             */
/*   Updated: 2023/12/21 11:22:17 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int	oneArgument(std::string av0)
{
	std::cerr << BRed"Use: " << av0 << " <name of file> <s1> <s2>" Color_off << std::endl;
	return (EXIT_FAILURE);
}

int	checkInputFile(std::ifstream &input_file, std::string inputFile)
{
	if (!input_file)
	{
		std::cerr << BRed"Error opening file " << inputFile << Color_off << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	checkOutputFile(std::ofstream &output_file, std::string outputFile)
{
	if (!output_file)
	{
		std::cerr << BRed"Error creating file " << outputFile << Color_off << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

void replaceLine(std::string& line, std::string& s1, std::string& s2)
{
	std::string newLine;
	size_t pos = 0;
	while (pos < line.length())
	{
		if (line.substr(pos, s1.length()) == s1)
		{
			newLine += s2;
			pos += s1.length();
		}
		else
		{
			newLine += line[pos];
			pos++;
		}
	}
	line = newLine;
}


int	main(int ac, char*av[])
{
	if (ac != 4)
		return oneArgument(av[0]);
	std::string	inputFile = av[INPUT_FILE];
	std::string	outputFile = inputFile + ".replace";
	std::string	s1 = av[S1];
	std::string s2 = av[S2];

	std::ifstream	input_file(inputFile);
	if (checkInputFile(input_file, inputFile))
	{
		input_file.close();
		return (EXIT_FAILURE);
	}
	std::ofstream	output_file(outputFile);
	if (checkOutputFile(output_file, outputFile))
	{
		input_file.close();
		output_file.close();
		return (EXIT_FAILURE);
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