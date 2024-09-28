/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:29:11 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 17:25:24 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl = Harl();
	harl.complain("debug");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("info");
	return (0);
}
