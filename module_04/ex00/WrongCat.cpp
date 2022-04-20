/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:42:45 by artmende          #+#    #+#             */
/*   Updated: 2022/04/20 17:46:25 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src.type)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << " : Miaaouuuuu !" << std::endl;
}
