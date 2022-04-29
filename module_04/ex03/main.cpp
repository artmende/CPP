/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:43:04 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 15:30:37 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	IMateriaSource*	src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(NULL);
	src->learnMateria(NULL);
	src->learnMateria(NULL);
	src->learnMateria(NULL);
	src->learnMateria(NULL);
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");
	AMateria*	tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter*	you = new Character(*((Character*)me));

	for (size_t i = 0; i < 10; i++)
	{
		me->unequip(i);
		you->unequip(i);
	}
	std::cout << "me speaking: My name is " << me->getName() << std::endl;
	std::cout << "you speaking: My name is " << you->getName() << std::endl;

	me->equip(src->createMateria("ice"));
	you->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	you->equip(src->createMateria("ice"));

	ICharacter*	bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	you->use(0, *bob);
	you->use(1, *bob);

	*you = *me;
	*you = *bob;
	*you = *me;


	you->unequip(-42);
	you->use(-18, *bob);

	delete bob;
	delete me;
	delete you;
	delete src;

	return 0;
}
