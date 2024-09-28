/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:40:50 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 17:55:56 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	std::size_t	length = sizeof(levels) / sizeof(levels[0]);
	for (std::size_t i = 0; i < length; ++i)
	{
		if (level.compare(levels[i]) == 0)
			return complain_level[i]();
	}
	std::cerr << "SEGMENTATION HARL: idk what's that level." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "DEBUG: " << __FILE__ << ":" << __LINE__ - 2 << " has 'void	Harl::debug(void)'" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: This is the line " << __LINE__ << " from the file " << __FILE__ << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: foreach is a feature from c++11" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: Segmentation Fault" << std::endl;
}

Harl::Harl()
{
	complain_level[0] = &debug;
	complain_level[1] = &info;
	complain_level[2] = &warning;
	complain_level[3] = &error;
}
