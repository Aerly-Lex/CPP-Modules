/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:10:16 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/20 10:27:30 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/BitcoinExchange.hpp"

int	main(int ac, char **av) // look at the output date  => 0 = 0 maybe remove that
{
	if (ac != 2) {
		std::cout << invalidArguments;
		return 1;
	}

	BitcoinExchange	btc;
	btc.loadExchangeData("data.csv");
	btc.processFile(av[1]);

	return 0;
}
