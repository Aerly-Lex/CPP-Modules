/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:39:01 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/24 15:53:11 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Replacer.hpp"

int	openFile(const std::string& filename, std::ifstream& file)
{
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cerr	<< RED
			<< "Failed to open file to read: "
			<< RESET
			<< filename << std::endl;
			return (FAIL);
	}
	return (SUCCESS);
}

int	openFile(const std::string& filename, std::ofstream& file)
{
	file.open(filename.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!file.is_open())
	{
		std::cerr	<< RED
			<< "Failed to open file to read: "
			<< RESET
			<< filename << std::endl;
			return (FAIL);
	}
	return (SUCCESS);
}
