/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:31:05 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/07 13:33:29 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->name = name;
	this->ClapTrap::hitPoints = FragTrap::hitPoints;
	this->ClapTrap::energyPoints = ScavTrap::energyPoints;
	this->ClapTrap::attackDamage = FragTrap::attackDamage;
	std::cout << MAGENTA << "DiamondTrap Constructor has been called\n" << RESET;
}

DiamondTrap::~DiamondTrap() {
	std::cout << MAGENTA << "DiamondTrap Destructor has been called\n" << RESET;
}

void	DiamondTrap::whoAmI() {
	std::cout	<< YELLOW
				<< "I am DiamondTrap: "
				<< name
				<< ". An evolved form of "
				<< ClapTrap::name
				<< RESET << std::endl;
}
