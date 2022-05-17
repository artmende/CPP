/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:52:38 by artmende          #+#    #+#             */
/*   Updated: 2022/05/17 16:41:42 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

void	test(int & a)
{
	a *= 2;
	std::cout << "test called" << std::endl;
}

template<typename T>
void	test2(T & a)
{
//	a *= 2;
	std::cout << a << std::endl;
}

int	main()
{

	int	array[5] = {7, 8, 65, 42, 19};

	iter<int>(array, 5, test2);

	std::cout << "Iter finished" << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << array[i] << std::endl;
	}

	return 0;
}
