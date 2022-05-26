/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:23:29 by artmende          #+#    #+#             */
/*   Updated: 2022/05/25 13:34:49 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < NBR_OF_IDEAS; i++)
		{
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return (*this);
}

void	Brain::store_idea(unsigned int index, std::string idea)
{
	this->_ideas[index % NBR_OF_IDEAS] = idea;
}

std::string	Brain::retrieve_idea(unsigned int index) const
{
	return (this->_ideas[index % NBR_OF_IDEAS]);
}
