/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:15:13 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/26 11:57:31 by ribana-b         ###   ########.com      */
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

	{
		int n = 10;
		Zombie *zs = zombieHorde(n, "Foo");
		for (int i = 0; i < n; ++i)
		{
			zs[i].announce();
		}
		delete[] zs;
	}

	{
		int n = 2;
		Zombie *zs = zombieHorde(n, "Bar");
		for (int i = 0; i < n; ++i)
		{
			zs[i].announce();
		}
		delete[] zs;
	}

	{
		int n = 100;
		Zombie *zs = zombieHorde(n, "Baz");
		for (int i = 0; i < n; ++i)
		{
			zs[i].announce();
		}
		delete[] zs;
	}
	return (0);
}
