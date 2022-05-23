/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:17:10 by artmende          #+#    #+#             */
/*   Updated: 2022/05/23 09:30:58 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <algorithm>

int	main()
{
	std::vector<int> b = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//	easyfind(b, 5);


	std::vector<int>::iterator	np = std::find(b.begin(), b.end(), -6);

//	int	*nb = std::find(b.begin(), b.end(), 2);

	while (np != b.end())
	{
		std::cout << *np << std::endl;
		++np;
	}
	std::cout << *np << std::endl;

//	std::cout << *(++np) << std::endl;


	return 0;
}
