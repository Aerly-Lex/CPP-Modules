/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:34:23 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/24 13:57:46 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

Harl::Harl() {
	std::cout << MAGENTA << "Constructor\n" << RESET;
	Harl::functions[0] = &Harl::debug;
	this->functions[1] = &Harl::info;
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

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*functions[i])();
			return ;
		}
	}
	std::cout	<< RED << "Invalid Level" << RESET
				<< std::endl;
}
// (this->*functions[2])();
