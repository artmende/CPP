/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:20:08 by artmende          #+#    #+#             */
/*   Updated: 2022/05/25 13:37:38 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMAL_ARRAY_SIZE 2

int	main()
{
//	AAnimal	test("no type"); // Doesn't compile as Animal class is abstract

	AAnimal*	animal_array[ANIMAL_ARRAY_SIZE];

	for (size_t i = 0; i < ANIMAL_ARRAY_SIZE; i++)
	{
		if (i < ANIMAL_ARRAY_SIZE / 2)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}

	std::cout << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	Dog	d1, d2;
	d1.store_idea(42, "A delicious bone");

	d2 = d1;
	
	Dog	d3(d1);

	d2.store_idea(42, "This is my home");
	d3.store_idea(42, "Let's go for a walk in the park");

	std::cout << std::endl;

	std::cout << "Idea of d1 : " << d1.retrieve_idea(42) << std::endl;
	std::cout << "Idea of d2 : " << d2.retrieve_idea(42) << std::endl;
	std::cout << "Idea of d3 : " << d3.retrieve_idea(42) << std::endl;

	std::cout << std::endl;

	for (size_t i = 0; i < ANIMAL_ARRAY_SIZE; i++)
	{
		delete animal_array[i];
	}
	return (0);
}
