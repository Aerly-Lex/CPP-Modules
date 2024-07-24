/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:09:29 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/22 18:36:01 by Dscheffn         ###   ########.fr       */
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

static void	convertToChar(const double value)
{
	char	c = static_cast<char>(value);

	if (value != value ||
			value < std::numeric_limits<char>::min() ||
			value > std::numeric_limits<char>::max())
		std::cout << "Char:\timpossible" << std::endl;
	else if (isprint(c))
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
	double	value = 0;

	if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
	{
		value = static_cast<double>(input[0]);
	}
	else
	{
		char*	end;
		value = std::strtod(input.c_str(), &end);

		if (*end != '\0' || end == input.c_str())
		{
			if (std::strcmp(end, "f") != 0)
			{
				std::cout << "Char: impossible" << std::endl;
				std::cout << "Int: impossible" << std::endl;
				std::cout << "Float: impossible" << std::endl;
				std::cout << "Double: impossible" << std::endl;
				return ;
			}
		}
	}

	convertToChar(value);
	convertToInt(value);
	convertToFloat(value);
	convertToDouble(value);
}
