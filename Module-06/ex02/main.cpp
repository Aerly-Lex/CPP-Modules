/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:18:33 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/23 16:33:07 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/header.hpp"

Base*	generate(void)
{
	int nbr = std::rand() % 3;

	switch (nbr)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return NULL;
	}
}
void	identify(Base* p)
{
	std::cout << "Identify Pointer:\t";
	if (p == NULL)
	{
		std::cout << "NULL pointer detected." << std::endl;
		return ;
	}
	//dynamic_cast returns a valid pointer or a NULL if it found no object of type A
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void	identify(Base& p)
{
	std::cout << "Identify reference:\t";
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (const std::exception &e) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (const std::exception &e) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (const std::exception &e) {}

	std::cout << "Unknown type" << std::endl;
}

int	main()
{
	std::srand(std::time(NULL));

	Base*	ptr = generate();
	identify(ptr);
	identify(*ptr);

	// Base*	null = NULL;
	// identify(null);
	// identify(*null);

	delete ptr;

	return 0;
}
