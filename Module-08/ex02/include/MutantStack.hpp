/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:18:01 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/11 11:37:39 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &other);
		MutantStack &operator=(MutantStack const &other);

	// Iterators:
		typedef typename std::stack<T>::container_type::iterator				iterator;
		iterator				begin();			// Return iterator to beginning
		iterator				end();				// Return iterator to end

		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		const_iterator			begin() const;		// Return reverse iterator to reverse beginning
		const_iterator			end() const; 		// Return reverse iterator to reverse end

		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		reverse_iterator		rbegin();			// Return const_iterator to beginning
		reverse_iterator		rend();				// Return const_iterator to end

		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		const_reverse_iterator	rbegin() const;		// Return const_reverse_iterator to reverse beginning
		const_reverse_iterator	rend() const;		// Return const_reverse_iterator to reverse end
};

#include "MutantStack.tpp"

#endif
