/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:05:15 by artmende          #+#    #+#             */
/*   Updated: 2022/05/11 12:40:46 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data*		d1;
	Data*		d2;
	uintptr_t	some_pointer;

	d1 = new Data("Very secret stuff");
	some_pointer = serialize(d1);
	d2 = deserialize(some_pointer);

	std::cout << "Address of d1 : " << d1 << std::endl;
	std::cout << "Address of d2 : " << d2 << std::endl;

	std::cout << "String contained in d2 : '" << d2->getData() << "'" << std::endl;

	std::cout << "Accessing the string from the uintptr_t type : '" << (reinterpret_cast<Data*>(some_pointer))->getData() << "'" << std::endl;

	delete d2;

	return 0;
}
