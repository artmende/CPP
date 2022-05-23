/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/05/23 10:28:02 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main()
{

	ScavTrap	*test = new ScavTrap("temp");
	test->guardGate();
	test->attack("itself");
	test->takeDamage(20);
	test->beRepaired(19);
	delete test;

	std::cout << std::endl;

	ClapTrap	bary("Bary");
	ScavTrap	scavy("Scavy");

	bary.attack("Scavy");
	scavy.takeDamage(0);
	scavy.attack("Bary");
	bary.takeDamage(20);
	scavy.guardGate();
	bary.attack("Scavy");
	scavy.beRepaired(42);

	return 0;
}
