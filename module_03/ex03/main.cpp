/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/04/18 18:59:25 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int	main()
{
/* 	ClapTrap	noname, bob("Bob");
	ScavTrap	alice("Alice");
	FragTrap	eve("Eve"), evecop(eve);

	alice.attack("[No Name]");
	noname.takeDamage(20);
	noname.beRepaired(5);
	eve.highFivesGuys();
	alice.guardGate();
	bob.attack("Eve_copy");
	evecop.takeDamage(0); */


	DiamondTrap	non;

	DiamondTrap	bob(non);

	bob.attack("himself");
	bob.highFivesGuys();
	bob.beRepaired(34);
	bob.guardGate();
	bob.takeDamage(0);
	bob.whoAmI();

/* 	bob.attack("himself");
	bob.takeDamage(30);
	bob.beRepaired(10);
	bob.guardGate();
	bob.highFivesGuys(); */
	

	return 0;
}
