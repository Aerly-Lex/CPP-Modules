/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:12:02 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/28 10:57:56 by Dscheffn         ###   ########.fr       */
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