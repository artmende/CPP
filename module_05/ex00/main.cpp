/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:24:18 by artmende          #+#    #+#             */
/*   Updated: 2022/05/04 15:14:11 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
//	Bureaucrat	mallory; // Doesnt compile as default constructor is private

	Bureaucrat	*alice = NULL, *bob = NULL, *eve = NULL, *craig = NULL;

	// Constructing Bureaucrats

	try
	{
		std::cout << "Trying to construct Alice...";
		alice = new Bureaucrat("Alice", -42); // Grade too high exception
		std::cout << "Success !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to construct Bob...";
		bob = new Bureaucrat("Bob", 54);
		std::cout << "Success !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to construct Eve...";
		eve = new Bureaucrat("Eve", 199); // Grade too low exception
		std::cout << "Success !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to construct Craig...";
		craig = new Bureaucrat("Craig", 62);
		std::cout << "Success !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// Playing with Bureaucrats grades

	if (alice)
	{
		std::cout << std::endl << *alice << std::endl;
		std::cout << "Promoting " << alice->getName() << " of 42 grades straight !" << std::endl;
		try
		{
			alice->incrementGrade(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << *alice << std::endl;
	}

	if (bob)
	{
		std::cout << std::endl << *bob << std::endl;
		std::cout << "Promoting " << bob->getName() << " to the next grade..." << std::endl;
		try
		{
			bob->incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << *bob << std::endl;
	}

	if (eve)
	{
		std::cout << std::endl << *eve << std::endl;
		std::cout << "Retrograding " << eve->getName() << " of a gade..." << std::endl;
		try
		{
			eve->decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << *eve << std::endl;
	}

	if (craig)
	{
		std::cout << std::endl << *craig << std::endl;
		std::cout << "Retrograding " << craig->getName() << " of 100 grades !" << std::endl;
		try
		{
			craig->decrementGrade(100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << *craig << std::endl;
	}

	// Deleting Bureaucrats

	delete bob;
	delete alice;
	delete eve;
	delete craig;

	return 0;
}
