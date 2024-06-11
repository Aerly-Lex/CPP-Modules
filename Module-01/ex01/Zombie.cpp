/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:03:19 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/16 17:45:49 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << MAGENTA << "Zombie Constructor has been called\n" << RESET;
}

Zombie::~Zombie() {
	std::cout << MAGENTA << this->getName() << " has been destructed\n" << RESET;
}

void	Zombie::setName(std::string str) {
	this->name = str;
}

std::string Zombie::getName() {
	return (this->name);
}

void	Zombie::announce(void) {
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
