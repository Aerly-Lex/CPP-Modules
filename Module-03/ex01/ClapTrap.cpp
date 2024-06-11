/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:18:40 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/06 12:50:26 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: name(name), hitPoints(defaultHitPoints), energyPoints(defaultEnergyPoints), attackDamage(defaultAttackDamage) {
	std::cout << MAGENTA << "Default Constructor has been called\n" << RESET;
}

ClapTrap::ClapTrap(const ClapTrap& other)
: name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << MAGENTA << "Copy Constructor has been called\n" << RESET;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << MAGENTA << "Copy assignment Constructor has been called\n" << RESET;
	if (this != &other)
	{
		name = other.name;
		attackDamage = other.attackDamage;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << MAGENTA << "Destructor has been called\n" << RESET;
}

static void	noEnergyMessage(std::string action, std::string name) {
	std::cout	<< RED
				<< name
				<< " has no Energy Points left to "
				<< action
				<< "."
				<< RESET << std::endl;
}

static void	noHitPointsMessage(std::string action , std::string name) {
	std::cout	<< RED
				<< name
				<< " can't "
				<< action
				<< " when it's dead."
				<< RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->hitPoints <= 0)
		noHitPointsMessage("attack", this->name);
	else if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout	<< RED
					<< "ClapTrap "
					<< this->name
					<< " attacks "
					<< target
					<< ", causing "
					<< this->attackDamage
					<< " points of damage!"
					<< RESET << std::endl;
	}
	else
		noEnergyMessage("attack", this->name);
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints <= 0)
		noHitPointsMessage("be damaged", this->name);
	else
	{
		this->hitPoints -= amount;
		std::cout	<< RED
					<< this->name
					<< " received "
					<< amount
					<< " points of damage! "
					<< this->name
					<< " has now "
					<< hitPoints
					<< " Hit Points."
					<< RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints <= 0)
		noHitPointsMessage("repair himself", this->name);
	else if (this->energyPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout	<< GREEN
					<< this->name
					<< " has repaired himself for "
					<< amount
					<< " Hit Points. It has now "
					<< this->hitPoints
					<< " Hit Points."
					<< RESET << std::endl;
	}
	else
		noEnergyMessage("attack", this->name);
}
