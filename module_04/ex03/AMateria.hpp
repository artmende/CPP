/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:24:13 by artmende          #+#    #+#             */
/*   Updated: 2022/04/28 15:30:50 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();
protected:
	std::string const	type;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();

	AMateria &	operator=(AMateria const & rhs);

	std::string const &	getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
