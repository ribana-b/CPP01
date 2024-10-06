/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:40:50 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/06 15:59:35 by ribana-b         ###   ########.com      */
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
	std::size_t	i = 0;
	for (; i < length; ++i)
	{
		if (level.compare(levels[i]) == 0)
			break ;
	}
	switch (i)
	{
		case HARL_DEBUG:
			complain_level[HARL_DEBUG]();
		case HARL_INFO:
			complain_level[HARL_INFO]();
		case HARL_WARNING:
			complain_level[HARL_WARNING]();
		case HARL_ERROR:
			complain_level[HARL_ERROR]();
			break ;
		default:
			std::cout << "SEGMENTATION HARL: idk what's that level" << std::endl;
			break ;
	}
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
