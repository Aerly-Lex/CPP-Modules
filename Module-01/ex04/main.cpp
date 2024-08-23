/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:48:25 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/27 15:52:15 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Replacer.hpp"

std::string	ft_replace(std::string line, std::string str1, std::string str2)
{
	size_t pos = 0;

	while ((pos = line.find(str1, pos)) != std::string::npos) // npos is a value that tells certain char/s havent been found
	{
		line.erase(pos, str1.length());
		line.insert(pos, str2);
		pos += str2.length();
	}
	return (line);
}

std::string	ft_file_content(std::ifstream &infile)
{
	std::string	ret = "";
	std::string	temp;

	while (1)
	{
		if (std::getline(infile, temp))
			ret += temp;
		else
			break ;
		if (!infile.eof())
			ret += "\n";
	}

	return (ret);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout	<< RED
					<< "Invalid number of arguments: ./main filename string1 string2"
					<< RESET << std::endl;
		return (FAIL);
	}

	std::string	inputFilename = argv[1];
	std::string	str1 = argv[2];
	std::string	str2 = argv[3];

	std::ifstream inputFile;
	if (openFile(inputFilename, inputFile))
		return (FAIL);

	std::ofstream outputFile;
	if (openFile(inputFilename + ".replace", outputFile))
	{
		inputFile.close();
		return (FAIL);
	}

	// If the newline is part of the argument that has to be replaced, we simply cant read line by line
	// We read entire file content
	std::string	file_content = ft_file_content(inputFile);

	outputFile << ft_replace(file_content, str1, str2);

	inputFile.close();
	outputFile.close();
	return (SUCCESS);
}
