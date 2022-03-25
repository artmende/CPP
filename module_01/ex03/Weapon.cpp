/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:51:41 by artmende          #+#    #+#             */
/*   Updated: 2022/03/25 16:43:18 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon(void)
{}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}

std::string const &Weapon::get_type(void) const
{
	return (this->_type);
}
