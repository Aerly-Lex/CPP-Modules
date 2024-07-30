/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:07:05 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/30 11:07:25 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/iter.hpp"

static void	printFunc(int &nbr)
{
	std::cout << nbr << std::endl;
}

static void	incrementFunc(int &nbr)
{
	nbr++;
}

int	main()
{
	int		arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	size_t	arrLength = sizeof(arr) / sizeof(int);

	std::cout << "ArrayLength:" << arrLength << std::endl;
	::iter(arr, arrLength, printFunc);

	std::cout << "Before Increment" << std::endl;
	::iter(arr, arrLength, incrementFunc);

	iter(arr, arrLength, printFunc);

	return 0;
}
