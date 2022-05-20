/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:04:21 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 18:01:27 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
ClapTrap("[No Name]_clap_name", 100, 50, 30, "DiamondTrap"), ScavTrap(), FragTrap(), _name("[No Name]")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + "_clap_name", 100, 50, 30, "DiamondTrap"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DiamondTrap String constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) :
ClapTrap(src._name + "_copy_clap_name", src.get_hit_points(), src.get_energy_points(), src.get_attack_damage(), "DiamondTrap"), ScavTrap(), FragTrap(), _name(src._name + "_copy")
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (&rhs != this)
	{
		this->set_name(rhs.get_name());
		this->_name = rhs._name;
		this->set_hit_points(rhs.get_hit_points());
		this->set_energy_points(rhs.get_energy_points());
		this->set_attack_damage(rhs.get_attack_damage());
	}
	return (*this);
}

void	DiamondTrap::whoAmI() const
{
	std::cout << this->get_type() << " " << this->get_name() << " : \"Who am I ?? ";
	std::cout << "I am " << this->_name << " but I also have a ClapTrap name which is " << this->get_name() << "\"" << std::endl;
}


