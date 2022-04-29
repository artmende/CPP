/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 14:42:30 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < SOURCE_CAPACITY; i++)
	{
		this->_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (size_t i = 0; i < SOURCE_CAPACITY; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < SOURCE_CAPACITY; i++)
	{
		delete this->_inventory[i];
	}
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < SOURCE_CAPACITY; i++)
		{
			delete this->_inventory[i];
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	int	i = 0;

	while (i < SOURCE_CAPACITY && this->_inventory[i])
		i++;
	if (i < SOURCE_CAPACITY)
		this->_inventory[i] = materia;
	else
		delete materia;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < SOURCE_CAPACITY; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]);
	}
	return (NULL);
}
