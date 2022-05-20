/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:18:56 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 17:54:11 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("[No Name]", 100, 50, 20, "ScavTrap")
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20, "ScavTrap")
{
	std::cout << "ScavTrap String constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) :
ClapTrap(src.get_name() + "_copy", src.get_hit_points(), src.get_energy_points(), src.get_attack_damage(), "ScavTrap")
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (&rhs != this)
	{
		this->set_name(rhs.get_name());
		this->set_hit_points(rhs.get_hit_points());
		this->set_energy_points(rhs.get_energy_points());
		this->set_attack_damage(rhs.get_attack_damage());
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (this->get_hit_points() == 0)
		std::cout << this->get_type() << " " << this->get_name() << " is dead and cannot enter Gate keeper mode." << std::endl;
	else if (this->get_energy_points() == 0)
		std::cout << this->get_type() << " " << this->_name << " doesn't have any Energy Point left and thus cannot enter Gate keeper mode." << std::endl;
	else
	{
		this->_energy_points--;
		std::cout << this->get_type() << " " << this->get_name() << " has entered Gate keeper mode." << std::endl;
	}
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->_hit_points == 0)
		std::cout << this->_type << " " << this->_name << " is already dead and thus cannot attack " << target << "!" << std::endl;
	else if (this->_energy_points)
	{
		this->_energy_points--;
		std::cout << this->_type << " " << this->_name << " does a ScavTrap attack on " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_type << " " << this->_name << " tries to do a ScavTrap attack on " << target << " but doesn't have any Energy Point left.. The attack fails !" << std::endl;
}
