/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:38:03 by artmende          #+#    #+#             */
/*   Updated: 2022/04/18 18:40:00 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("[No Name]", 100, 100, 30, "FragTrap")
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30, "FragTrap")
{
	std::cout << "FragTrap String constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) :
ClapTrap(src.get_name() + "_copy", src.get_hit_points(), src.get_energy_points(), src.get_attack_damage(), "FragTrap")
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (&rhs != this)
	{
		this->set_name(rhs.get_name());
		this->set_hit_points(rhs.get_hit_points());
		this->set_energy_points(rhs.get_energy_points());
		this->set_attack_damage(rhs.get_attack_damage());
	}
	return (*this);
}

void	FragTrap::highFivesGuys() const
{
	if (this->get_hit_points() == 0)
		std::cout << this->get_type() << " " << this->get_name() << " is dead and cannot request a High-Five." << std::endl;
	else
		std::cout << this->get_type() << " " << this->get_name() << " : \"High Five guys !!\"" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	if (this->_hit_points == 0)
		std::cout << this->_type << " " << this->_name << " is already dead and thus cannot attack " << target << "!" << std::endl;
	else if (this->_energy_points)
	{
		this->_energy_points--;
		std::cout << this->_type << " " << this->_name << " does a FragTrap attack on " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_type << " " << this->_name << " tries to do a FragTrap attack on " << target << " but doesn't have any Energy Point left.. The attack fails !" << std::endl;
}
