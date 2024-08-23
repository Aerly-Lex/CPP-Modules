/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:18:00 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/11 10:25:47 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other) : std::stack<T>(other) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other) {
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
}


//				Iterators				//

template <typename T>
typename MutantStack<T>::iterator				MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator				MutantStack<T>::end() {
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::begin() const {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::end() const {
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rbegin() {
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rend() {
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const {
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const {
	return this->c.rend();
}
