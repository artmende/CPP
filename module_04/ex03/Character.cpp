/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/28 15:32:29 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character()
{}

Character &	Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int	i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i < 4)
		this->_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	// if inventory[idx] == 0, dont do anything
	// otherwise, add the materia to the unequipped array
	// then inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}
