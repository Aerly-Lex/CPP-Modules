/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:18:33 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/04 12:01:04 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int	main()
{
	ClapTrap	Alpha("Alpha");
	ClapTrap	Beta("Beta");

	Alpha.attack("Beta");
	Alpha.takeDamage(12);
	Alpha.beRepaired(12);
	Beta.beRepaired(22);
	Alpha.attack("Beta");
	return (0);
}
