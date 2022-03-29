/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:33:50 by artmende          #+#    #+#             */
/*   Updated: 2022/03/29 18:10:50 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	std::cout << "Level 'DEBUG' :" << std::endl;
	karen.complain("DEBUG");

	std::cout << std::endl << "Level 'INFO' :" << std::endl;
	karen.complain("INFO");

	std::cout << std::endl << "Level 'WARNING' :" << std::endl;
	karen.complain("WARNING");

	std::cout << std::endl << "Level 'ERROR' :" << std::endl;
	karen.complain("ERROR");

	std::cout << std::endl << "Level 'ANOTHER LEVEL THAT DOESN'T EXIST' :" << std::endl;
	karen.complain("ANOTHER LEVEL THAT DOESN'T EXIST");

	std::cout << std::endl << "Level 'DEBUG' :" << std::endl;
	karen.complain("DEBUG");
	return (0);
}
