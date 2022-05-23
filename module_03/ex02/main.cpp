/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/05/23 10:34:39 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main()
{
	ClapTrap	noname, bob("Bob");
	ScavTrap	alice("Alice");
	FragTrap	eve("Eve"), evecop(eve);

	std::cout << std::endl;

	alice.attack("[No Name]");
	noname.takeDamage(20);
	noname.beRepaired(5);
	eve.highFivesGuys();
	eve.attack("Alice");
	alice.takeDamage(30);
	alice.guardGate();
	bob.attack("Eve_copy");
	evecop.takeDamage(0);

	std::cout << std::endl;
	FragTrap	*test = new FragTrap;
	delete test;
	std::cout << std::endl;

	return 0;
}
