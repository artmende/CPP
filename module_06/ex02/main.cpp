/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:44:18 by artmende          #+#    #+#             */
/*   Updated: 2022/05/11 14:12:38 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate()
{
	Base*	ret;

	int	i = rand() % 3;

	switch (i)
	{
	case 0:
		ret = new A;
		std::cout << "Generating an instance of A..." << std::endl;
		break;
	case 1:
		ret = new B;
		std::cout << "Generating an instance of B..." << std::endl;
		break;
	case 2:
		ret = new C;
		std::cout << "Generating an instance of C..." << std::endl;
		break;
	}
	return(ret);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e)
	{}

	try
	{
		B &	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch(const std::exception& e)
	{}

	try
	{
		C &	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch(const std::exception& e)
	{}
}

int	main()
{

	std::srand(time(NULL));

	Base*	instance_1 = generate();
	Base*	instance_2 = generate();
	Base*	instance_3 = generate();

	identify(instance_1);
	identify(*instance_2);
	identify(*instance_3);

	delete instance_1;
	delete instance_2;
	delete instance_3;

	return 0;
}
