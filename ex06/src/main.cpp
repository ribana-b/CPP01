/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:29:11 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 17:59:43 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl = Harl();
	if (argc != 2)
	{
		harl.complain("ERROR");
		return (1);
	}
	std::string	level = argv[1];
	harl.complain(level);
	return (0);
}
