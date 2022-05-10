/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:29:59 by artmende          #+#    #+#             */
/*   Updated: 2022/05/10 14:01:14 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	fill_intermediate_str(std::string *str, std::string infile_name)
{
	int				return_value = 0;
	std::ifstream	file(infile_name.c_str());
	std::string		buffer;

	while (file.good())
	{
		std::getline(file, buffer);
		if (file.eof() == false)
			buffer.append("\n");
		str->append(buffer);
	}
	if (file.eof() == false)
	{
		std::cout << "Error while reading the file '" << infile_name << "'" << std::endl;
		return_value = -1;
	}
	file.close();
	return (return_value);
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

int	create_outfile(std::string original_name, std::string str_to_print)
{
	int				return_value = 0;
	std::string		outfile_name = original_name.append(".replace");
	std::ofstream	outfile(outfile_name.c_str());

	if (outfile.good() == false)
	{
		std::cout << "Error while writing to outfile" << std::endl;
		return_value = 1;
	}
	else
		outfile << str_to_print;
	outfile.close();
	return (return_value);
}

int	main(int argc, char **argv)
{
	if (argc != 4 || ((std::string)argv[1]).length() == 0
		|| ((std::string)argv[2]).length() == 0)
	{
		std::cout << "Usage : ./replace FILENAME String1 String2" << std::endl;
		return (1);
	}
	std::string	intermediate_string = "";
	if (1 == fill_intermediate_str(&intermediate_string, argv[1]))
		return (1);
	replace_word_in_str(&intermediate_string, argv[2], argv[3]);
	return (create_outfile(argv[1], intermediate_string));
}
