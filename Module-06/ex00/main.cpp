/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:08:43 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/22 18:36:02 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "No Arguments given\n";
		return (1);
	}

	for (int i = 1; av[i]; i++)
	{
		std::cout	<< GREEN
					<< "Entered parameter: "
					<< av[i]
					<< RESET << std::endl;
		ScalarConverter::convert(av[i]);
	}

	return (0);
}
