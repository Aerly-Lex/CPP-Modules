/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:47:18 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/24 15:20:18 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		N = 4;
	Zombie	*horde = zombieHorde(N, "Zoohoombie");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;

	return (0);
}
