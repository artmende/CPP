/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:36:46 by artmende          #+#    #+#             */
/*   Updated: 2022/03/25 15:09:42 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA(void)
{}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon.get_type() << std::endl;
}
