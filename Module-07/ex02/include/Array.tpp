/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:07:41 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/26 12:55:01 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(NULL), arrSize(0) {}

template <typename T>
Array<T>::Array(const unsigned int n) : arr(new T[n]), arrSize(n) {}

template <typename T>
Array<T>::~Array() {
	delete[]	arr;
}

template <typename T>
Array<T>::Array(const Array& other) {
	arrSize = other.arrSize;
	arr = new T[arrSize];
	for (unsigned int i = 0; i < arrSize; i++)
		arr[i] = other.arr[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array& other) {
	if (this != &other)
	{
		T* newArr= new T(other.arrSize);
		arrSize = other.arrSize;
		for (unsigned int i = 0; i < arrSize; i++)
			newArr[i] = other.arr[i];
		delete[] arr;
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) const {

	if (index >= arrSize)
		throw std::out_of_range("Out of range - abort mission!");
	return (arr[index]);
}

//			Methods			//

template <typename T>
unsigned int	Array<T>::size() const {
	return (arrSize);
}
