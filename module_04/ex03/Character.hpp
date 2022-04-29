/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/04/29 12:07:49 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define INVENTORY_SIZE 4

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria*	_inventory[INVENTORY_SIZE];
	AMateria**	_unequipped_materias; // initialize it to NULL
	Character();
public:
	Character(std::string name);
	Character(Character const & src);
	~Character();

	Character &	operator=(Character const & rhs);

	std::string const &	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif
