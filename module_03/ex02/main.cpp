/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/04/17 15:58:32 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main()
{
	ClapTrap	noname, bob("Bob");
	ScavTrap	alice("Alice");
	FragTrap	eve("Eve"), evecop(eve);

	alice.attack("[No Name]");
	noname.takeDamage(20);
	noname.beRepaired(5);
	eve.highFivesGuys();
	alice.guardGate();
	bob.attack("Eve_copy");
	evecop.takeDamage(0);

	return 0;
}
