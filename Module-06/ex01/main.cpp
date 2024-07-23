/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 08:27:14 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/23 16:31:39 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Serializer.hpp"

int	main()
{
	Data		alpha = {42, "HelloWorld"};
	Data*		ptr = &alpha;

	uintptr_t	serial = Serializer::serialize(ptr);
	Data*		deserial = Serializer::deserialize(serial);

	std::cout	<< "Original Ptr:\t" << ptr << std::endl;
	std::cout	<< "Serialized:\t" << serial << std::endl;
	std::cout	<< "Deserialized:\t" << deserial << std::endl;

	if (ptr == deserial)
		std::cout	<< GREEN
					<< "Serialization and Deserialization Successful!\n"
					<< RESET << std::endl;
	else
		std::cout	<< RED
					<< "Serialization and Deserialization Failed!\n"
					<< RESET << std::endl;

	return (0);
}
