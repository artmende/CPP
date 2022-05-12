/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:11:51 by artmende          #+#    #+#             */
/*   Updated: 2022/05/12 14:42:17 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	char		ca = 'h', cb = '.';
	int			ia = 19, ib = 42;
	float		fa = 101.1f, fb = -42.42f;
	std::string	sa = "Hello", sb = "Good bye";

	std::cout << "ca: " << ca << " | cb: " << cb << std::endl;
	std::cout << "ia: " << ia << " | ib: " << ib << std::endl;
	std::cout << "fa: " << fa << " | fb: " << fb << std::endl;
	std::cout << "sa: '" << sa << "' | sb: '" << sb << "'" << std::endl;

	std::cout << std::endl;

	std::cout << "Minimum between ca and cb is " << min<char>(ca, cb) << std::endl;
	std::cout << "Maximum between ca and cb is " << max<char>(ca, cb) << std::endl;
	std::cout << "Minimum between ia and ib is " << min<int>(ia, ib) << std::endl;
	std::cout << "Maximum between ia and ib is " << max<int>(ia, ib) << std::endl;
	std::cout << "Minimum between fa and fb is " << min<float>(fa, fb) << std::endl;
	std::cout << "Maximum between fa and fb is " << max<float>(fa, fb) << std::endl;
	std::cout << "Minimum between sa and sb is '" << ::min<std::string>(sa, sb) << "'" << std::endl;
	std::cout << "Maximum between sa and sb is '" << ::max<std::string>(sa, sb) << "'" << std::endl;

	std::cout << std::endl;

	std::cout << "Swapping ca and cb...Done" << std::endl;
	swap<char>(ca, cb);
	std::cout << "Swapping ia and ib...Done" << std::endl;
	swap<int>(ia, ib);
	std::cout << "Swapping fa and fb...Done" << std::endl;
	swap<float>(fa, fb);
	std::cout << "Swapping sa and sb...Done" << std::endl;
	::swap<std::string>(sa, sb);

	std::cout << std::endl;

	std::cout << "ca: " << ca << " | cb: " << cb << std::endl;
	std::cout << "ia: " << ia << " | ib: " << ib << std::endl;
	std::cout << "fa: " << fa << " | fb: " << fb << std::endl;
	std::cout << "sa: '" << sa << "' | sb: '" << sb << "'" << std::endl;

	return 0;
}
