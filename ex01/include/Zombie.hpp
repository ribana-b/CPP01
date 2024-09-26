/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:57:28 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/26 11:46:29 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <string>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Zombie
{
	public:
		void	announce(void);
		void	set_name(std::string name);
		Zombie();
		Zombie(std::string);
		~Zombie();
	private:
		std::string	_name;
};


/* @------------------------------------------------------------------------@ */
/* |                           Function Section                             | */
/* @------------------------------------------------------------------------@ */

Zombie	*newZombie(std::string);
void	randomChump(std::string);
Zombie	*zombieHorde(int n, std::string name);

#endif // ZOMBIE_HPP
