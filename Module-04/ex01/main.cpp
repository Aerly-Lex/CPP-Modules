/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:42:47 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 12:00:18 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;//should not create a leak
	// delete i;

	const int amount = 6;
	Animal* animals[amount];
	for (int i = 0; i < amount; i++) {
		if (i < amount / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < amount; i++)
		animals[i]->makeSound();

	for (int i = 0; i < amount; i++)
		delete animals[i];


	return 0;
}
