/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:47:32 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 13:50:24 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}

	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
