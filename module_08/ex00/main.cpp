/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:17:10 by artmende          #+#    #+#             */
/*   Updated: 2022/05/23 17:40:36 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int	main()
{
	std::vector<int> v;
	std::list<int> l;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(i);
	}

	std::cout << "Content of the vector :" << std::endl;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	std::cout << "Content of the list :" << std::endl;
	for (std::list<int>::iterator i = l.begin(); i != l.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	std::cout << "Showing elements in vector from the value 5" << std::endl;
	for (std::vector<int>::iterator i = easyfind<std::vector<int> >(v, 5); i != v.end(); i++)
	{
		std::cout << *i << std::endl;
	}
	
	std::cout << "Showing elements in list from the value 5" << std::endl;
	for (std::list<int>::iterator i = easyfind<std::list<int> >(l, 5); i != l.end(); i++)
	{
		std::cout << *i << std::endl;
	}
	return 0;
}
