/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:40:25 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/06 13:02:11 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << MAGENTA << "Default ScavTrap Constructor has been called\n" << RESET;
}

ScavTrap::ScavTrap(const ScavTrap& other)
: ClapTrap(other) {
	std::cout << MAGENTA << "ScavTrap Copy Constructor has been called\n" << RESET;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << MAGENTA << "ScavTrap Copy Assignment Constructor has been called\n" << RESET;
	if (this != &other)
		(void)other;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << MAGENTA << "ScavTrap Destructor has been called\n" << RESET;
}


static void	noEnergyMessage(std::string action, std::string name) {
	std::cout	<< RED
				<< "ScavTrap "
				<< name
				<< " has no Energy Points left to "
				<< action
				<< "."
				<< RESET << std::endl;
}

static void	noHitPointsMessage(std::string action , std::string name) {
	std::cout	<< RED
			<< "ScavTrap "
			<< name
			<< " can't "
			<< action
			<< " when it's dead"
			<< RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->hitPoints <= 0)
		noHitPointsMessage("attack", this->name);
	else if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout	<< RED
					<< "ScavTrap "
					<< this->name
					<< " attacks furiously "
					<< target
					<< ", causing exactly "
					<< this->attackDamage
					<< " points of damage!"
					<< RESET << std::endl;
	}
	else
		noEnergyMessage("attack", this->name);
}

void	ScavTrap::guardGate() {
	std::cout << YELLOW << "ScavTrap is in Gate keeper mode\n" << RESET;
}
