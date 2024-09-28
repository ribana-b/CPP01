/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:41:29 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 17:48:33 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <string>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Harl
{
	public:
		Harl();
		void	complain(std::string level);

	private:
		static void	debug(void);
		static void	info(void);
		static void	warning(void);
		static void	error(void);
		void		(*complain_level[4])();
};

#endif // HARL_HPP
