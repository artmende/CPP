/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:54:59 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 17:29:50 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main()
{
	ClapTrap	bary("Bary"), josh("Josh"), matt("Matt");

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

	for (size_t i = 0; i < 10; i++)
	{
		matt.beRepaired(1);
	}

	return 0;
}
