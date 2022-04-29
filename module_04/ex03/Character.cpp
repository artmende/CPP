/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 15:31:22 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() // we don't want to use default constructor
{}

Character::Character(std::string name) : _name(name), _unequipped_materias(NULL)
{
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(Character const & src) : _name(src.getName()), _unequipped_materias(NULL)
{
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
	// delete inventory and delete unequipped
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
	{
		delete this->_inventory[i];
	}

	AMateria**	ptr = this->_unequipped_materias;
	while (ptr && *ptr)
	{
		delete *ptr;
		ptr++;
	}
	delete [] this->_unequipped_materias;
}

Character &	Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (size_t i = 0; i < INVENTORY_SIZE; i++)
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

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;

	int	i = 0;
	while (i < INVENTORY_SIZE && this->_inventory[i])
		i++;
	if (i < INVENTORY_SIZE)
		this->_inventory[i] = m->clone();
	// need to duplicate the materia from source to avoid double delete
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE || this->_inventory[idx] == NULL)
		return ;

// Duplicating the unequipped array and adding the freshly unequipped materia at the end
	int	current_size = 0;
	AMateria**	ptr = this->_unequipped_materias;
	while (ptr && *ptr)
	{
		ptr++;
		current_size++;
	}
	AMateria**	new_unequipped = new AMateria *[current_size + 2];
	new_unequipped[current_size + 1] = NULL;
	new_unequipped[current_size] = this->_inventory[idx];
	for (int i = 0; i < current_size; i++)
	{
		new_unequipped[i] = this->_unequipped_materias[i];
	}
// Replacing old array by new updated one
	delete [] this->_unequipped_materias;
	this->_unequipped_materias = new_unequipped;
// Removing the materia from the inventory
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INVENTORY_SIZE && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}
