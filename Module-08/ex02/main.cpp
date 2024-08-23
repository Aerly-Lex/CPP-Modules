/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:17:57 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/12 17:27:41 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n-----------------------------------------------------\n\n";

	MutantStack<int>	mstack2(mstack);
	MutantStack<int>	mstack3;
	mstack3 = mstack;

	std::cout << "Iterating through mstack2 (copy constructed):" << std::endl;
	for (MutantStack<int>::iterator it = mstack2.begin(); it != mstack2.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << "Iterating through mstack3 (copy assigned):" << std::endl;
	for (MutantStack<int>::iterator it = mstack3.begin(); it != mstack3.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "\n-----------------------------------------------------\n\n";

	MutantStack<char>	cstack;
	cstack.push(36);
	cstack.push(42);
	cstack.pop();
	cstack.push(72);
	cstack.push(105);
	cstack.push(36);

	for (MutantStack<char>::iterator it = cstack.begin(); it != cstack.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}
