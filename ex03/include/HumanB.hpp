/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:30:26 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/06 13:28:49 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <string>
# include "Weapon.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class HumanB
{
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);

	private:
		Weapon		*weapon;
		std::string	name;
};

#endif // HUMANB_HPP
