/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:12:02 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/20 15:27:55 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/RPN.hpp"

int	main(int ac, char** av)
{
	if (ac != 2)
		return invalidArguments;

	RPN	rpn;
	rpn.processExpression(av[1]);

	return 0;
}

//  $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 42
// $> ./RPN "7 7 * 7 -"
// 42
// $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 0
// $> ./RPN "(1 + 1)"
// Error

//  5 + 7 2 – *
// 40
