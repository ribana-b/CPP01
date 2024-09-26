/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:15:13 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/26 11:41:08 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	names[] = {
		"Luffy",
		"Gyoro",
		"Nin",
		"Bao",
	};
	randomChump("Brook");
	randomChump("Moria");
	for (std::size_t i = 0; i < sizeof(names) / sizeof(names[0]); ++i)
	{
		Zombie *z = newZombie(names[i]);
		z->announce();
		delete z;
	}
	Zombie *z = new Zombie("Lola");
	z->announce();
	delete z;
	return (0);
}
