/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:43:08 by artmende          #+#    #+#             */
/*   Updated: 2022/05/24 17:51:57 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <cstdlib>
#include <ctime>
#include <list>
#include <set>

int	main()
{
	Span sp = Span(10);
	sp.addNumber(5);
	sp.addNumber(10);
	sp.addNumber(20);
	sp.addNumber(-115);
	sp.addNumber(-11);
	sp.addNumber(5);

/* 	std::srand(time(NULL));

	std::vector<int> v, y;

	for (size_t i = 0; i < 20; i++)
	{
		v.push_back((rand() % 1000) * (i % 5));
	}

	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	std::cout << std::endl;

	y = v;


	std::sort(v.begin(), v.end());
*/
	std::list<int>	l;
	for (size_t i = 0; i < 4; i++)
	{
		l.push_back(rand() % 5);
	}
	
/*
	v.insert(v.end(), l.begin(), l.end());

	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		std::cout << *i << std::endl;
	}
 */

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.addRangeOfNumbers<std::list<int> >(l.begin(), l.end());

	for (size_t i = 0; i < sp.get_raw_vector().size(); i++)
	{
		std::cout << sp.get_raw_vector()[i] << std::endl;
	}
	
	

return 0;
}