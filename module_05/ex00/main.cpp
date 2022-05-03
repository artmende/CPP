/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:24:18 by artmende          #+#    #+#             */
/*   Updated: 2022/05/03 12:42:09 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
//	Bureaucrat	bob; // Doesnt compile as default constructor is private

	Bureaucrat	bob("Bob", 54);
	Bureaucrat	alice("Alice", -42); // exception
	Bureaucrat	Eve("Eve", 199); // exception

	bob.decrementGrade(200); // exception
	bob.incrementGrade(200); // exception
	bob.incrementGrade(); // works


	return 0;
}
