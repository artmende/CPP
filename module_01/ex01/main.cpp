/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:04:01 by artmende          #+#    #+#             */
/*   Updated: 2022/03/23 15:14:58 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		nbr_of_zombies = 19;
	Zombie	*my_zombie_horde;

	my_zombie_horde = zombieHorde(nbr_of_zombies, "Brainy");
	for (int i = 0; i < nbr_of_zombies; i++)
	{
		std::cout << "Zombie with ID " << i << " has just joined the horde !" << std::endl;
		my_zombie_horde->announce();
		std::cout << std::endl;
	}
	delete [] my_zombie_horde;
	return (0);
}
