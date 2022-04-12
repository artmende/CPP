/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:55:04 by artmende          #+#    #+#             */
/*   Updated: 2022/04/12 13:22:16 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_name("[No Name]"), _hit_points(10), _energy_points(10), _attack_damage(0)
{}

ClapTrap::ClapTrap(std::string name) :
_name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_energy_points)
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " tries to attack " << target << " but doesn't have any Energy Point left.. The attack fails !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
}

void	ClapTrap::beRepaired(unsigned int amount)
{
}
