/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:17:33 by artmende          #+#    #+#             */
/*   Updated: 2022/05/23 17:35:01 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template<typename T>
typename T::iterator	easyfind(T & container, int n)
{
	typename T::iterator	i = std::find(container.begin(), container.end(), n);
	return (i);
}

#endif
