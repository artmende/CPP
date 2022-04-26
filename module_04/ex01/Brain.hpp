/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:20:01 by artmende          #+#    #+#             */
/*   Updated: 2022/04/26 15:15:58 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define NBR_OF_IDEAS 100

class Brain
{
private:
	std::string	_ideas[NBR_OF_IDEAS];
public:
	Brain();
	Brain(Brain const & src);
	~Brain();

	Brain &	operator=(Brain const & rhs);

	void		store_idea(unsigned int index, std::string idea);
	std::string	retrieve_idea(unsigned int index) const;
};

#endif
