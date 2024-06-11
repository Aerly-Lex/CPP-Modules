/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:18:33 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/06 13:01:52 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int	main()
{
	ClapTrap	Alpha("Alpha");
	ScavTrap	Beta("Beta");
	FragTrap	Gamma("Gamma");

	Alpha.attack("Gamma");
	Alpha.beRepaired(30);
	Alpha.takeDamage(12);
	Alpha.beRepaired(2);
	Alpha.attack("Gamma");

	Beta.attack("Alpha");
	Beta.guardGate();
	Beta.attack("Alpha");
	Beta.beRepaired(60);
	Beta.guardGate();

	Gamma.attack("Beta");
	Gamma.highFivesGuys();
	Gamma.beRepaired(42);
	Gamma.takeDamage(10);

	return (0);
}
