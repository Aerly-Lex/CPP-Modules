/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:34:06 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/24 13:56:53 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

#define	debugMessage "I really want this function to work!"
#define	infoMessage "I didn't know I have to compile this to run it!?"
#define	warningMessage "I only want to click on this program to get started without doing snip snap!"
#define	errorMessage "This is third-grade stuff! I want to talk with the manager!"



class Harl {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	(Harl::*functions[4])();
	public:
		Harl();
		~Harl();
		void	complain( std::string level );
};

#endif
