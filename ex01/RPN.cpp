/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:12:13 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/21 11:40:50 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) {
	*this = other;
}
RPN& RPN::operator=(const RPN& other) {
	if (this != &other)
		stack = other.stack;
	return *this;
}

//			Functions & Methods			//

int		RPN::performOperation(int a, int b, char op)
{
	switch (op)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '*':
			return (a * b);
		case '/':
			if (b == 0)
				throw std::runtime_error(invalidDivision);
			return (a / b);

		default:
			throw std::runtime_error(invalidUnknown);
	}
}

void	RPN::handleOperator(char op)
{
	if (stack.size() < 2)
		throw std::runtime_error(invalidAmount);
	int	b = stack.top();
	stack.pop();
	int	a = stack.top();
	stack.pop();

	int result = performOperation(a, b, op);
	stack.push(result);
}

bool	RPN::isOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}


void	RPN::processExpression(const std::string& expression)
{
	std::istringstream	iss(expression);
	std::string			token;

	try {
		while (iss >> token)
		{
			if (isdigit(token[0]))
				stack.push(std::stoi(token));
			else if (isOperator(token[0]))
				handleOperator(token[0]);
			else
				throw std::runtime_error(invalidInput);
		}

		if (stack.size() != 1)
				throw std::runtime_error(invalidExpression);
		else
			std::cout << stack.top() << std::endl;
	} catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}

	while (!stack.empty())
		stack.pop();
}
