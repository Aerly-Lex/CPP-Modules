/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:07:59 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/30 08:11:41 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Array.hpp"
#include "include/Array.tpp"

#include <cstdlib>

int	main()
{
	srand(time(NULL));
	Array<char>	emptyArr;
	Array<int>	intArr(5);

	std::cout << "Size of Empty Array:\t" << emptyArr.size() << std::endl;
	std::cout << "Size of Int Array:\t" << 	intArr.size() << std::endl;

	for (unsigned int i = 0; i < intArr.size(); i++)
	{
		const int value = rand();
		intArr[i] = value % 100;
	}
	std::cout << "\nintArray content:\n";
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] << std::endl;

	std::cout << "\nMirrorArray content:\n";

	Array<int> mirror = intArr;
	for (unsigned int i = 0; i < mirror.size(); i++)
		std::cout << mirror[i] << std::endl;

	return 0;
}

// #include <cstdlib>
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
