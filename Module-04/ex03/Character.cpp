/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:22:23 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 10:56:19 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete inventory[i];
		// inventory[i] = NULL;
	}
}

// ICharacter(other),
Character::Character(const Character& other) : name(other.name) {
	for (int i = 0; i < 4; i++) {
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++) {
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
		this->name = other.name;

		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

//			Methods & Functions			//

std::string const&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << getName() << " has equipped " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "No free slots available" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid Slot number" << std::endl;
	else if (this->inventory[idx] != NULL)
		this->inventory[idx] = NULL;
	else
		std::cout << "It's already empty" << std::endl;
}


void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid Slot number" << std::endl;
	else if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
	else
		std::cout << "The slot is empty" << std::endl;
}
