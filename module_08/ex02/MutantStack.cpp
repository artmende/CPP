/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/24 10:03:20 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack()
{}

MutantStack::MutantStack(MutantStack const & src)
{
	*this = src;
}

MutantStack::~MutantStack()
{}

MutantStack &	MutantStack::operator=(MutantStack const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return (*this);
}
