/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:18:33 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/06 12:37:02 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"
#include "include/DiamondTrap.hpp"

int	main()
{
	// ClapTrap	Alpha("Alpha");
	// ScavTrap	Beta("Beta");
	// FragTrap	Gamma("Gamma");
	DiamondTrap	Omega("Omega");

	// Alpha.attack("Gamma");
	// Alpha.beRepaired(30);
	// Alpha.takeDamage(12);
	// Alpha.beRepaired(2);
	// Alpha.attack("Gamma");

	// Beta.attack("Alpha");
	// Beta.guardGate();
	// Beta.attack("Alpha");
	// Beta.beRepaired(60);
	// Beta.guardGate();

	// Gamma.attack("Beta");
	// Gamma.highFivesGuys();
	// Gamma.beRepaired(42);

	Omega.ClapTrap::attack("Gamma");
	Omega.attack("Gamma");
	Omega.beRepaired(0);
	Omega.takeDamage(0);
	Omega.whoAmI();

	return (0);
}
