/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:20:08 by artmende          #+#    #+#             */
/*   Updated: 2022/04/26 16:26:57 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMAL_ARRAY_SIZE 2

int	main()
{
//	Animal	test("no type"); // Doesn't compile as Animal class is abstract

	Animal*	animal_array[ANIMAL_ARRAY_SIZE];

	for (size_t i = 0; i < ANIMAL_ARRAY_SIZE; i++)
	{
		if (i < ANIMAL_ARRAY_SIZE / 2)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Dog	d1, d2;
	d1.store_idea(42, "A delicious bone");

	d2 = d1;
	
	Dog	d3(d1);

	d2.store_idea(42, "This is my home");
	d3.store_idea(42, "Let's go for a walk in the park");

	std::cout << "Idea of d1 : " << d1.retrieve_idea(42) << std::endl;
	std::cout << "Idea of d2 : " << d2.retrieve_idea(42) << std::endl;
	std::cout << "Idea of d3 : " << d3.retrieve_idea(42) << std::endl;

	for (size_t i = 0; i < ANIMAL_ARRAY_SIZE; i++)
	{
		delete animal_array[i];
	}
	return (0);
}
