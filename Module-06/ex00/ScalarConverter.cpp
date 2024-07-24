/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:09:29 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/24 17:35:47 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	(void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return (*this);
}

//			Static functions/helpers			//

static bool	ft_isprint(const char c)
{
	return (c >= 32 && c <= 126);
}

static bool	ft_isdigit(const char c)
{
	return (c >= '0' && c <= '9');
}

static double stringToDouble(const std::string &input)
{
	std::string newInput = input;
	if (!newInput.empty() && newInput[newInput.length() - 1] == 'f')
		newInput = newInput.substr(0, newInput.length() - 1);


	std::istringstream stream(newInput);
	double value;
	stream >> value;
	if (stream.fail() || !stream.eof())
		throw std::exception();

	return value;
}

static void	convertToChar(const double value)
{
	char	c = static_cast<char>(value);

	if (value != value ||
			value < std::numeric_limits<char>::min() ||
			value > std::numeric_limits<char>::max())
		std::cout << "Char:\timpossible" << std::endl;
	else if (ft_isprint(c))
		std::cout << "Char:\t'" << c << "'" << std::endl;
	else
		std::cout << "Char:\tNon displayable" << std::endl;
}

static void	convertToInt(const double value)
{
	if (value != value ||
		value == std::numeric_limits<double>::infinity() ||
		value < INT_MIN || value > INT_MAX)
		std::cout << "Int:\timpossible" << std::endl;
	else
		std::cout << "Int:\t" << static_cast<int>(value) << std::endl;
}

static void	convertToFloat(const double value)
{
	if (value != value)
		std::cout << "Float:\tnanf" << std::endl;
	else if (value == std::numeric_limits<double>::infinity())
		std::cout << "Float:\t" << (value > 0 ? "+inff" : "-inff") << std::endl;
	else
	{
		std::cout << "Float:\t" << static_cast<float>(value);
		if (value == static_cast<int>(value))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

static void	convertToDouble(const double value)
{
	if (value != value)
		std::cout << "Double:\tnan" << std::endl;
	else if (value == std::numeric_limits<double>::infinity())
		std::cout << "Double:\t" << (value > 0 ? "+inf" : "-inf") << std::endl;
	else
	{
		std::cout << "Double:\t" << value;
		if (value == static_cast<int>(value))
			std::cout << ".0";
		std::cout << std::endl;
	}
}


//			Methods			//

void	ScalarConverter::convert(std::string input)
{
	if (input == "inf" || input == "+inf")
	{
		std::cout << "Char:\t impossible\n";
		std::cout << "Int:\t impossible\n";
		std::cout << "Float:\t +inff\n";
		std::cout << "Double:\t +inf\n";
		return ;
	}
	else if (input == "-inf")
	{
		std::cout << "Char:\t impossible\n";
		std::cout << "Int:\t impossible\n";
		std::cout << "Float:\t -inff\n";
		std::cout << "Double:\t -inf\n";
		return ;
	}
	else if (input == "nan" || input == "nanf")
	{
		std::cout << "Char:\t impossible\n";
		std::cout << "Int:\t impossible\n";
		std::cout << "Float:\t nanf\n";
		std::cout << "Double:\t nan\n";
		return ;
	}
	try
	{
		double	value;

		if (input.size() == 1 && ft_isprint(input[0]) && !ft_isdigit(input[0]))
			value = static_cast<double>(input[0]);
		else
			value = stringToDouble(input);

		convertToChar(value);
		convertToInt(value);
		convertToFloat(value);
		convertToDouble(value);
	} catch (const std::exception &e)
	{
		return (std::cout << RED << "This is not a valid input" << RESET << std::endl), void();
	}
}
