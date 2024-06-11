/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:18:33 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/06 12:54:31 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"

int	main()
{
	ClapTrap	Alpha("Alpha");
	ScavTrap	Beta("Beta");

	Alpha.attack("Beta");
	Alpha.takeDamage(30);
	Alpha.beRepaired(12);
	Beta.beRepaired(22);
	Alpha.attack("Beta");

	Beta.attack("Alpha");
	Alpha.takeDamage(30);
	Beta.guardGate();
	Beta.attack("Alpha");
	Alpha.takeDamage(30);
	Beta.beRepaired(60);
	return (0);
}