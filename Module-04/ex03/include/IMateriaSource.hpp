/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:50:46 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 12:08:48 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {};
		virtual void		learnMateria(AMateria* m) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
