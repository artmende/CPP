/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/27 10:11:02 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(Dog const & src) : AAnimal(src.type)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->type << " : Grrr, waff wafff !" << std::endl;
}

void	Dog::store_idea(unsigned int index, std::string idea)
{
	this->_brain->store_idea(index, idea);
}

std::string	Dog::retrieve_idea(unsigned int index) const
{
	return (this->_brain->retrieve_idea(index));
}
