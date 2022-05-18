/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:07:32 by artmende          #+#    #+#             */
/*   Updated: 2022/05/18 15:13:45 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<std::string> strarray;
	Array<int>			intarray(19);

	std::cout << strarray.size() << std::endl;

	intarray[11] = -7;
	for (size_t i = 0; i < 19; i++)
	{
		std::cout << intarray[i] << std::endl;
	}
	
	return 0;
}
