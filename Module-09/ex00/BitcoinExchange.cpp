/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:10:14 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/28 09:58:23 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::~BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other)
		exchange = other.exchange;
	return *this;
}

//			Methods				//

void	BitcoinExchange::loadExchangeData(const std::string &exchangeFile)
{
	std::ifstream	file(exchangeFile.c_str());
	if (!file.is_open()) {
		std::cout << invalidFile;
		return ;
	}

	std::string	line;
	std::string	date;
	double		rate;
	while (std::getline(file, line))
	{
		std::istringstream	iss(line);
		if (std::getline(iss, date, ',') && iss >> rate)
			exchange[date] = rate;
	}
	file.close();
}

double	BitcoinExchange::getExchangeData(const std::string &date)
{
	if (exchange.find(date) != exchange.end())
		return exchange[date];

	std::map<std::string, double>::iterator	it = exchange.lower_bound(date);
	if (it != exchange.begin())
	{
		--it;
		return it->second;
	}
	return -1;
}

void	BitcoinExchange::processFile(const std::string &inputFile)
{
	std::ifstream	file(inputFile.c_str());
	if (!file.is_open()) {
		std::cout << invalidFile;
		return ;
	}

	std::string	line;
	bool		firstLine = true;

	while (std::getline(file, line))
	{
		if (firstLine)
		{
			firstLine = false;
			continue ;
		}

		std::istringstream	iss(line);
		std::string			date;
		std::string			valueStr;
		double				value;
		if (std::getline(iss, date, '|') && std::getline(iss, valueStr))
		{
			value = std::atof(valueStr.c_str());
			if (value < 0) {
				std::cerr << negativeNumber;
				continue ;
			}
			else if (value > 1000) {
				std::cerr << tooLargeNumber;
				continue ;
			}
			double rate = getExchangeData(date);
			std::cout << std::setprecision(15) << date << " => " << value << " = " << (value * rate) << std::endl;
		}
		else
			std::cout << invalidValues << " => " << line << std::endl;
	}
}
