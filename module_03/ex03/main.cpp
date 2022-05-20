/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 18:03:58 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	non;
	DiamondTrap	bob(non);

	bob.attack("himself");
	bob.highFivesGuys();
	bob.beRepaired(34);
	bob.guardGate();
	bob.takeDamage(0);
	bob.whoAmI();

	return 0;
}
