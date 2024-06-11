/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:42:59 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/23 15:12:09 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/HumanA.hpp"
#include "include/HumanB.hpp"
#include "include/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& type)
	: _name(name), _weapon(type)
{}

HumanA::~HumanA() {}

void	HumanA::setName(std::string name) {
	this->_name = name;
}

std::string HumanA::getName() {
	return (this->_name);
}

void	HumanA::attack()
{
	std::cout	<< getName()
				<< " attacks with their "
				<< _weapon.getType()
				<< std::endl;
}
