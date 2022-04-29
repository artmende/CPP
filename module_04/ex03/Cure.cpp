/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 14:59:38 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const & src) : AMateria(src.getType())
{}

Cure::~Cure()
{}

Cure &	Cure::operator=(Cure const & rhs)
{
	(void)rhs;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria*	ret = new Cure;
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
