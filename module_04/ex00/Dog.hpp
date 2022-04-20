/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/04/20 17:30:57 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog();
	Dog(Dog const & src);
	~Dog();

	Dog &	operator=(Dog const & rhs);

	void	makeSound() const;
};

#endif
