/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/04/27 10:06:09 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const & src);
	virtual ~AAnimal();

	AAnimal &	operator=(AAnimal const & rhs);

	std::string		getType() const;
	virtual void	makeSound() const = 0;
};

#endif
