/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:56:04 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/06 10:50:56 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/FragTrap.hpp"

FragTrap::FragTrap(std::string fragTrapName)
: ClapTrap(fragTrapName) {
	this->hitPoints = diamondStats;
	this->energyPoints = defaultEnergyPoints;
	this->attackDamage = diamondStats;
	std::cout << MAGENTA << "Default FragTrap Constructor has been called\n" << RESET;
}

FragTrap::FragTrap(const FragTrap& other)
: ClapTrap(other) {
	std::cout << MAGENTA << "FragTrap Copy Constructor has been called\n" << RESET;
}


FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << MAGENTA << "FragTrap Copy Assignment Constructor has been called\n" << RESET;
	if (this != &other)
	{
		(void)other;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << MAGENTA << "FragTrap Destructor has been called\n" << RESET;
}

void	FragTrap::highFivesGuys(void) {
	std::cout	<< YELLOW
				<< "FragTrap "
				<< this->getName()
				<< " yells: HIGH FIVE, GUYS!"
				<< RESET << std::endl;
}

static void	noEnergyMessage(std::string action, std::string name) {
	std::cout	<< RED
				<< "FragTrap "
				<< name
				<< " has no Energy Points left to "
				<< action
				<< "."
				<< RESET << std::endl;
}

static void	noHitPointsMessage(std::string action , std::string name) {
	std::cout	<< RED
			<< "FragTrap "
			<< name
			<< " can't "
			<< action
			<< " when it's dead"
			<< RESET << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (this->hitPoints <= 0)
		noHitPointsMessage("attack", this->name);
	else if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout	<< RED
					<< "FragTrap "
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
