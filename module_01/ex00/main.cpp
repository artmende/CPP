/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:04:01 by artmende          #+#    #+#             */
/*   Updated: 2022/03/23 13:37:44 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*my_zombie;

	my_zombie = newZombie("Heap Zombie");
	randomChump("Stack Zombie");
	delete my_zombie;
	return (0);
}
