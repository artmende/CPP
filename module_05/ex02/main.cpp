/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:24:18 by artmende          #+#    #+#             */
/*   Updated: 2022/05/26 15:07:32 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "Creating the bureaucrats...";
	Bureaucrat	alice("Alice", 19);
	Bureaucrat	bob("Bob", 42);
	Bureaucrat	trudy("Trudy", 99);

	std::cout << "Done !\nDetails about the 3 bureaucrats created :" << std::endl;
	std::cout << alice << std::endl;
	std::cout << bob << std::endl;
	std::cout << trudy << std::endl << std::endl;

	std::cout << "Creating the forms...";
	Form*	sh = new ShrubberyCreationForm("Alice's home");
	Form*	rb = new RobotomyRequestForm("Bob");
	Form*	pp = new PresidentialPardonForm("Trudy");

	std::cout << "Done !\nDetails about the 3 forms created :" << std::endl;
	std::cout << *sh << std::endl;
	std::cout << *rb << std::endl;
	std::cout << *pp << std::endl << std::endl;

	alice.signForm(*sh);
	alice.executeForm(*sh);
	std::cout << std::endl;
	trudy.signForm(*rb);
	alice.executeForm(*rb);
	std::cout << std::endl;
	trudy.incrementGrade(54);
	trudy.signForm(*rb);
	trudy.executeForm(*rb);

	std::cout << std::endl;

	std::cout << trudy.getName() << " is now trying to get Bob to pardon him..." << std::endl;
	bob.signForm(*pp);
	std::cout << std::endl;
	alice.signForm(*pp);
	trudy.executeForm(*pp);
	std::cout << "Will " << trudy.getName() << " ever be pardoned ? Let's call the manager !" << std::endl;

	std::cout << std::endl;

	Bureaucrat	general_manager("General Manager", 0);

	general_manager.executeForm(*pp);

	delete sh;
	delete rb;
	delete pp;

	return 0;
}
