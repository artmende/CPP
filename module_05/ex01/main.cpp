/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:24:18 by artmende          #+#    #+#             */
/*   Updated: 2022/05/26 14:58:51 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	*alice = NULL, *bob = NULL, *eve = NULL, *craig = NULL;

	// Constructing Bureaucrats

	try
	{
		std::cout << "Trying to construct Alice...";
		alice = new Bureaucrat("Alice", 42);
		std::cout << "Success ! " << *alice << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to construct Bob...";
		bob = new Bureaucrat("Bob", 54);
		std::cout << "Success ! " << *bob << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to construct Eve...";
		eve = new Bureaucrat("Eve", 19);
		std::cout << "Success ! " << *eve << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to construct Craig...";
		craig = new Bureaucrat("Craig", 107);
		std::cout << "Success ! " << *craig << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << std::endl;

	// Constructing forms

	Form	*tm30 = NULL, *tm7 = NULL;

	try
	{
		std::cout << "Trying to construct the form TM30...";
		tm30 = new Form("TM30", 100, 10);
		std::cout << "Success !" << '\n' << *tm30 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to construct the form TM7...";
		tm7 = new Form("TM7", 10, 0);
		std::cout << "Success !" << '\n' << *tm7 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	// signing forms

	if (tm30)
	{
		std::cout << std::endl;
		std::cout << "State of Form before Craig attempt to sign it : ";
		std::cout << (tm30->getIsSigned() ? "Signed" : "Not signed") << std::endl;
		if (craig)
			craig->signForm(*tm30);
		std::cout << "State of Form before Eve attempt to sign it : ";
		std::cout << (tm30->getIsSigned() ? "Signed" : "Not signed") << std::endl;
		if (eve)
			eve->signForm(*tm30);
		std::cout << "State of Form after : ";
		std::cout << (tm30->getIsSigned() ? "Signed" : "Not signed") << std::endl;
	}

	if (tm7)
	{
		std::cout << std::endl;
		std::cout << "State of Form before Alice attempt to sign it : ";
		std::cout << (tm7->getIsSigned() ? "Signed" : "Not signed") << std::endl;
		if (alice)
			alice->signForm(*tm7);
		std::cout << "State of Form before Bob attempt to sign it : ";
		std::cout << (tm7->getIsSigned() ? "Signed" : "Not signed") << std::endl;
		if (bob)
			bob->signForm(*tm7);
		std::cout << "State of Form after : ";
		std::cout << (tm7->getIsSigned() ? "Signed" : "Not signed") << std::endl;
	}

	// Deleting Bureaucrats and forms

	delete bob;
	delete alice;
	delete eve;
	delete craig;
	delete tm30;
	delete tm7;

	return 0;
}
