/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/20 17:32:33 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src.type)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->type << " : Grrr, waff wafff !" << std::endl;
}
