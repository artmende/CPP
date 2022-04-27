/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/04/27 10:10:23 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain*	_brain;
public:
	Dog();
	Dog(Dog const & src);
	~Dog();

	Dog &	operator=(Dog const & rhs);

	void	makeSound() const;
	void		store_idea(unsigned int index, std::string idea);
	std::string	retrieve_idea(unsigned int index) const;
};

#endif
