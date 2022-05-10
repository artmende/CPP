/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:54:51 by artmende          #+#    #+#             */
/*   Updated: 2022/05/10 15:43:02 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Number.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);

	Number	nbr(av[1]);

//	std::cout << std::fixed << std::setprecision(1);

	std::cout << nbr << std::endl;

	return 0;
}
