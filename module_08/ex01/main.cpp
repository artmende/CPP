/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:43:08 by artmende          #+#    #+#             */
/*   Updated: 2022/05/30 15:38:09 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <cstdlib>
#include <ctime>
#include <list>
#include <set>

int	main()
{
	// Test with small Span, test exception.

	Span	*sp = new Span(6);

	sp->addNumber(5);
	sp->addNumber(10);
	sp->addNumber(20);
	sp->addNumber(-115);
	sp->addNumber(-11);
	sp->addNumber(13);

	std::cout << sp->shortestSpan() << std::endl;
	std::cout << sp->longestSpan() << std::endl;

	try
	{
		sp->addNumber(12); // will throw an exception because Span is full
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete sp;

	std::cout << std::endl;

	// Test with big Span

	std::srand(time(NULL));

	sp = new Span(19000);

	while (true)
	{
		try
		{
			sp->addNumber(rand());
		}
		catch(const std::exception& e)
		{
			break;
		}
	}

	std::cout << sp->shortestSpan() << std::endl;
	std::cout << sp->longestSpan() << std::endl;

	delete sp;

	std::cout << std::endl;

	// Test adding number by range of iterators

	std::list<int>	l;
	for (size_t i = 0; i < 4; i++)
	{
		l.push_back(rand() % 5);
	}

	sp = new Span(l.size());

	sp->addRangeOfNumbers<std::list<int> >(l.begin(), l.end());

	for (size_t i = 0; i < sp->get_raw_vector().size(); i++)
	{
		std::cout << sp->get_raw_vector()[i] << std::endl;
	}

	delete sp;

return 0;
}
