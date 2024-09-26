/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:44:30 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/27 12:24:00 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (!weapon)
	{
		std::cout << name << " is attacking without weapons" << std::endl;
		return ;
	}
	std::cout << name << " is attacking with " << weapon->getType() << std::endl;
}
