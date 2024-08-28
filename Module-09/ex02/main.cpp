/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:14:07 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/28 11:14:41 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PmergeMe.hpp"

// Set to true to enable recursive sorting
bool recursiveFlag = false;

int	main(int ac, char** av)
{
	if (ac < 2)
		return invalidArguments;

	try
	{
		PmergeMe merge;
		merge.sort(ac, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	return 0;
}
