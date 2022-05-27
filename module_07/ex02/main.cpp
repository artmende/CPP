/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:07:32 by artmende          #+#    #+#             */
/*   Updated: 2022/05/27 15:28:58 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int	main()
{
	Array<std::string>	strarray; // empty array
	Array<int>			intarray(19);

	std::cout << strarray.size() << std::endl;

	std::cout << std::endl;

	try
	{
		intarray[11] = 19;
		intarray[42] = 19; // will throw an exception
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	for (size_t i = 0; i < intarray.size(); i++)
	{
		std::cout << "Value at index " << i << ": " << intarray[i] << std::endl;
	}

	Array<Awesome>	awarray(4); // array of class
	for (size_t i = 0; i < awarray.size(); i++)
	{
		std::cout << awarray[i] << std::endl;
	}

	return 0;
}
