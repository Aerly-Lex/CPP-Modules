/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:11:06 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/24 15:30:41 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/HumanA.hpp"
#include "include/HumanB.hpp"
#include "include/Weapon.hpp"

HumanB::HumanB(std::string name)
	: _name(name), _weapon(NULL)
{}

HumanB::~HumanB() {}

std::string	HumanB::getName() {
	return (this->_name);
}

void	HumanB::setName(std::string name) {
	this->_name = name;
}
void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout	<< getName()
					<< " attacks with their "
					<< _weapon->getType()
					<< std::endl;
	else
		std::cout	<< getName()
					<< " has no weapon to attack with!"
					<< std::endl;
}
