/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:14:07 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/21 15:14:43 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PmergeMe.hpp"

int	main(int ac, char** av)
{
	if (ac < 2)
		return 1;

	PmergeMe merge;
	merge.sort(ac, av);

	return 0;
}
// 31.08-02.09
