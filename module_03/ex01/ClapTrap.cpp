/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:55:04 by artmende          #+#    #+#             */
/*   Updated: 2022/04/14 16:21:05 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string	ClapTrap::get_name() const
{
	return (this->_name);
}

unsigned int	ClapTrap::get_hit_points() const
{
	return (this->_hit_points);
}

unsigned int	ClapTrap::get_energy_points() const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::get_attack_damage() const
{
	return (this->_attack_damage);
}

std::string	ClapTrap::get_type() const
{
	return (this->_type);
}

void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void	ClapTrap::set_hit_points(unsigned int amount)
{
	this->_hit_points = amount;
}

void	ClapTrap::set_energy_points(unsigned int amount)
{
this->_energy_points = amount;
}

void	ClapTrap::set_attack_damage(unsigned int	amount)
{
	this->_attack_damage = amount;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage, std::string type) :
_name(name), _hit_points(hit_points), _energy_points(energy_points), _attack_damage(attack_damage), _type(type)
{
	std::cout << "ClapTrap Inheritance constructor called" << std::endl;
}

ClapTrap::ClapTrap() :
_name("[No Name]"), _hit_points(10), _energy_points(10), _attack_damage(0), _type("ClapTrap")
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_name(name), _hit_points(10), _energy_points(10), _attack_damage(0), _type("ClapTrap")
{
	std::cout << "ClapTrap String constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) :
_name(src._name + "_copy"), _hit_points(src._hit_points), _energy_points(src._energy_points), _attack_damage(src._attack_damage), _type("ClapTrap")
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (&rhs != this)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hit_points == 0)
		std::cout << this->_type << " " << this->_name << " is already dead and thus cannot attack " << target << "!" << std::endl;
	else if (this->_energy_points)
	{
		this->_energy_points--;
		std::cout << this->_type << " " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_type << " " << this->_name << " tries to attack " << target << " but doesn't have any Energy Point left.. The attack fails !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << this->_type << " " << this->_name << " is already dead and cannot take any more damage!" << std::endl;
	else if (this->_hit_points <= amount)
	{
		this->_hit_points = 0;
		std::cout << this->_type << " " << this->_name << " takes " << amount << " points of damage and dies!" << std::endl;
	}
	else
	{
		this->_hit_points -= amount;
		std::cout << this->_type << " " << this->_name << " takes " << amount << " points of damage and has " << this->_hit_points << " hitpoints left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << this->_type << " " << this->_name << " is already dead and cannot be repaired." << std::endl;
	else
	{
		this->_hit_points += amount;
		std::cout << this->_type << " " << this->_name << " is repaired for " << amount << " hitpoints and now has a total of " << this->_hit_points << " hitpoints!" << std::endl;
	}
}
