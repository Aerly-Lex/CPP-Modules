/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:58:09 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 17:50:34 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	// if (tmp == NULL) {
	// 	std::cerr << "Ice AMateria failed" << std::endl;
	// 	return 1;
	// }
	me->equip(tmp);
	tmp = src->createMateria("cure");
	// if (tmp == NULL) {
	// 	std::cerr << "Cure AMateria failed" << std::endl;
	// 	return 1;
	// }
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
