/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:12:18 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/21 11:36:00 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <stdexcept>

#define invalidArguments	std::cout << "Invalid numbers of Arguments - single string with numbers and operators are required.\n", 1
#define invalidInput		"Error: Invalid Token\n"
#define invalidExpression	"Error: Invalid expression\n"
#define invalidAmount		"Error: Not enough numbers for calculation\n"
#define invalidDivision		"Error: Division by zero\n"
#define invalidUnknown		"Error: Unknown operator\n"

class RPN {
	private:
		std::stack<double>	stack;

	public:
		RPN();
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);

		void	handleOperator(char op);
		bool	isOperator(char c);
		int		performOperation(int a, int b, char op);

		void	processExpression(const std::string&	expression);
};

#endif
