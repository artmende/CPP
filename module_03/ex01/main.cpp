/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/04/13 12:52:24 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main()
{
/* 	ClapTrap	bary("Bary"), josh("Josh"), matt("Matt");

	bary.attack("Josh");
	josh.takeDamage(3);
	matt.attack("Josh");
	josh.takeDamage(4);
	josh.beRepaired(10);
	bary.attack("Josh");
	josh.takeDamage(8);
	matt.attack("Josh");
	josh.takeDamage(7);
	josh.beRepaired(15); */


	ScavTrap	scavy;

	scavy.beRepaired(42);
	scavy.attack("itself");
	

	return 0;
}
