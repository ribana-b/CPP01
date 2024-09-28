/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:29:11 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 16:12:53 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Sedpp.hpp"

int	main(int argc, char **argv)
{
	std::string program_name = argv[0];
	if (argc != 4)
	{
		std::cerr << "Usage: " << program_name << " <FILENAME> <OLDWORD> <NEWWORD>" << std::endl;
		return (1);
	}
	std::string	filename = argv[1];
	std::string	oldWord = argv[2];
	std::string	newWord = argv[3];
	Sedpp	sed = Sedpp(filename, oldWord, newWord);
	sed.global_replace_to_file();
	if (!sed.is_success())
	{
		std::cerr << "An error ocurred, make sure the file exist" << std::endl;
		return (1);
	}
	return (0);
}
