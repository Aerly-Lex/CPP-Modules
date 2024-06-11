/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:09:48 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/16 16:45:20 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie1;

	zombie1.setName("Foo");
	zombie1.announce();


	Zombie	*zombie2 = newZombie("Bar");
	zombie2->announce();
	delete(zombie2);

	randomChump("Chumper");

	return (0);
}
