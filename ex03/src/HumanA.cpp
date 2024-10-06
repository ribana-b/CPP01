/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:42:51 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/06 14:01:52 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
}

void	HumanA::attack(void)
{
	std::cout << name << " is attacking with " << weapon.getType() << std::endl;
}
