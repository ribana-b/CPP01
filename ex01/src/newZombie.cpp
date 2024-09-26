/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:14:30 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/26 11:46:23 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *z = new Zombie;
	z->set_name(name);
	return (z);
}

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*z = new Zombie[n];
	for (int i = 0; i < n; ++i)
	{
		z[i].set_name(name);
	}
	return (z);
}
