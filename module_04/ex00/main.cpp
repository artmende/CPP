/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:20:08 by artmende          #+#    #+#             */
/*   Updated: 2022/04/20 17:48:58 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal*	a = new WrongAnimal();
	const WrongAnimal*	b = new WrongCat();

	std::cout << a->getType() << std::endl;
	std::cout << b->getType() << std::endl;
	a->makeSound();
	b->makeSound();

	delete meta;
	delete j;
	delete i;
	delete a;
	delete b;

	return (0);
}
