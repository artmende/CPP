/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/26 16:01:09 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(Cat const & src) : Animal(src.type)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->type << " : Miaaouuuuu !" << std::endl;
}

void	Cat::store_idea(unsigned int index, std::string idea)
{
	this->_brain->store_idea(index, idea);
}

std::string	Cat::retrieve_idea(unsigned int index) const
{
	return (this->_brain->retrieve_idea(index));
}
