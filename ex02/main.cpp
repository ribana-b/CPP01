/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:04:56 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/26 13:04:57 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	stringOG = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringOG;
	std::string	&stringREF = stringOG;

	std::cout << "Memory address of stringOG: " << &stringOG << std::endl;
	std::cout << "Memory address of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	std::cout << "Value of stringOG: " << stringOG << std::endl;
	std::cout << "Value of stringPTR: " << stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	return (0);
}
