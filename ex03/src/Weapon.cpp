/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:49:41 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/06 14:02:52 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
