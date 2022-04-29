/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:26:01 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 15:09:51 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const & type) : type(type)
{}

AMateria::AMateria(AMateria const & src) : type(src.type)
{}

AMateria::~AMateria()
{}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	(void) rhs;
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
