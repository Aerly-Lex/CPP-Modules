/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:10:11 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/20 10:25:09 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>

#define invalidFile			"Invalid file\n"
#define invalidArguments	"Invalid numbers of Arguments - a filename as argument is required.\n"
#define invalidDates		"The date stamps are invalid\n"
#define negativeNumber		"Error: not a positive number.\n"
#define tooLargeNumber		"Error: too large a number.\n"
#define	invalidValues		"Error: bad input "

class BitcoinExchange {
	private:
		std::map<std::string, double> exchange;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange& operator=(const BitcoinExchange &other);

	void	loadExchangeData(const std::string &exchangeFile);
	void	processFile(const std::string &inputFile);
	double	getExchangeData(const std::string &date);
};

#endif
