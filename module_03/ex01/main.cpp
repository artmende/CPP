/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/04/17 15:29:03 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main()
{
	ClapTrap	bary("Bary"), josh("Josh"), matt("Matt"), noname;

	bary.attack("Josh");
	josh.takeDamage(3);
	matt.attack("Josh");
	josh.takeDamage(4);
	josh.beRepaired(10);
	bary.attack("Josh");
	josh.takeDamage(8);
	matt.attack("Josh");
	josh.takeDamage(7);
	josh.beRepaired(15);


	ScavTrap	scavy("Scavy");

	scavy.beRepaired(42);
	scavy.attack("itself");
	scavy.guardGate();

	bary = scavy;

	bary.takeDamage(42);
	
	ClapTrap	testt(scavy);
	
	testt.attack("another being");


	ClapTrap	jack("Jack");
	ScavTrap	bob("Bob");

	jack = bob;

	return 0;
}
