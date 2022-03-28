/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:29:59 by artmende          #+#    #+#             */
/*   Updated: 2022/03/28 15:48:16 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	fill_intermediate_str(std::string *str, std::string file_name)
{
	std::ifstream	file(file_name);
	std::string		buffer;

	while (file.good())
	{
		std::getline(file, buffer);
		if (file.eof() == false)
			buffer.append("\n");
		str->append(buffer);
	}
	if (file.eof() == false)
		std::cout << "Error while reading the file '" << file_name << "'" << std::endl;
	file.close();
}

void	replace_word_in_str(std::string *str, std::string w1, std::string w2)
{
	size_t	index;
	
	while (std::string::npos != (index = str->find(w1, 0)))
	{
		str->erase(index, w1.length());
		str->insert(index, w2);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage : ./replace FILENAME String1 String2" << std::endl;
		return (1);
	}

	std::string	intermediate_string;

	fill_intermediate_str(&intermediate_string, argv[1]);

	replace_word_in_str(&intermediate_string, argv[2], argv[3]);

	std::cout << intermediate_string << std::endl;

	return (0);
}
