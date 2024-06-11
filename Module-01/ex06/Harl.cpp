/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:03:22 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/30 13:42:42 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

Harl::Harl() {
	std::cout << MAGENTA << "Constructor\n" << RESET;
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::~Harl() {
	std::cout << MAGENTA << "Destructor\n" << RESET;
}

void	Harl::debug( void ) {
	std::cout	<< GREEN <<"DEBUG\n" << RESET
				<< debugMessage
				<< std::endl;
}
void	Harl::info( void ) {
	std::cout	<< GREEN << "INFO\n" << RESET
				<< infoMessage
				<< std::endl;
}
void	Harl::warning( void ) {
	std::cout	<< GREEN << "WARNING\n" << RESET
				<< warningMessage
				<< std::endl;
}
void	Harl::error( void ) {
	std::cout	<< GREEN << "ERROR\n" << RESET
				<< errorMessage
				<< std::endl;
}


void	Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}

	switch (i)
	{
		case 0:
			(this->*functions[i++])();
			// fallthrough
		case 1:
			(this->*functions[i++])();
			// fall through
		case 2:
			(this->*functions[i++])();
			// fall through
		case 3:
			(this->*functions[i])();
			// fall through
		default:
			std::cout	<< RED << "Invalid Level" << RESET
						<< std::endl;
	}
}



// std::string ft_file_content(std::ifstream &infile)
// {
// 	std::string ret = "";
// 	std::string temp;

// 	while (1)
// 	{
// 		if (std::getline(infile, temp))
// 			ret += temp;
// 		else
// 			break ;
// 		if (!infile.eof())
// 			ret += "\n";
// 	}
// 	return (ret);
// }