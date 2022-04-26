/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/04/26 15:47:52 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat();
	Cat(Cat const & src);
	~Cat();

	Cat &	operator=(Cat const & rhs);

	void	makeSound() const;
	void		store_idea(unsigned int index, std::string idea);
	std::string	retrieve_idea(unsigned int index) const;
};

#endif
