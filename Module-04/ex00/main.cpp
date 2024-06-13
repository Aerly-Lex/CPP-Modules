/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:42:47 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/11 13:38:40 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal* brocco = new WrongAnimal();
	const WrongAnimal* tappes = new WrongCat();
	std::cout << brocco->getType() << std::endl;
	std::cout << tappes->getType() << std::endl;
	tappes->makeSound();

	delete brocco;
	delete tappes;

	return 0;
}
