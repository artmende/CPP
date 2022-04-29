/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 14:16:31 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define SOURCE_CAPACITY 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_inventory[SOURCE_CAPACITY];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	MateriaSource &	operator=(MateriaSource const & rhs);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif
