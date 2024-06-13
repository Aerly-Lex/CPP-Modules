/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:50:46 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 13:53:40 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource {
	private:
	public:
		IMateriaSource() {};
		virtual ~IMateriaSource() {};
		// IMateriaSource(const IMateriaSource& other);
		// IMateriaSource& operator=(const IMateriaSource& other);

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif
