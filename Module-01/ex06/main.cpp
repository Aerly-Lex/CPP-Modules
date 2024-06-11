/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:55:45 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/24 14:07:27 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;

	for (int i = 1; i < argc; i++)
		harl.complain(argv[i]);

	return (0);
}
