/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:17:33 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 17:19:26 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template<typename T>
int	easyfind(T container, int n)
{
	for (typename T::const_iterator i = container.begin(); i != container.end(); i++)
	{
		if (*i == n)
		{
			std::cout << "Found it !" << std::endl;
			return (*i);
		}
	}
	std::cout << "Didnt find it..." << std::endl;
	return (-1);
}


#endif
