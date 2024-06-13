/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:35:01 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/11 16:38:57 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Brain.hpp"

Brain::Brain() {
	std::cout << MAGENTA << "Brain constructor called" << RESET << std::endl;
}

Brain::~Brain() {
	std::cout << MAGENTA << "Brain destructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << MAGENTA << "Brain copy constructor called" << RESET <<std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << MAGENTA << "Brain copy assignment constructor called" << RESET <<std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}
