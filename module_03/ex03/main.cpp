/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/05/23 10:39:32 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	*dave = new DiamondTrap("Dave");
	dave->guardGate();
	dave->whoAmI();
	delete dave;
	std::cout << std::endl;

	DiamondTrap	non;
	DiamondTrap	bob(non);

	std::cout << std::endl;

	bob.attack("himself");
	bob.highFivesGuys();
	bob.beRepaired(34);
	bob.guardGate();
	bob.takeDamage(0);
	bob.whoAmI();

	std::cout << std::endl;

	return 0;
}
