/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:54:41 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/06 13:27:29 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << ": NooOOoOOOooo..." << std::endl;
}

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name)
{
}
