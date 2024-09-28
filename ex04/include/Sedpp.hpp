/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:30:35 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 16:32:30 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDPP_HPP
# define SEDPP_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <string>
# include <fstream>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Sedpp
{
	public:
		Sedpp(std::string &filename, std::string &oldWord, std::string &newWord);

		std::string	global_replace(void);

		void		global_replace_to_file();
		void		global_replace_to_file(std::string &filename);
		static bool	is_success(void);

		std::string	get_old_word(void);
		std::string	get_new_word(void);
		std::string	get_filename(void);
		void		set_old_word(std::string &oldWord);
		void		set_new_word(std::string &newWord);
		void		set_filename(std::string &filename);

	private:
		std::string	filename;
		std::string	oldWord;
		std::string	newWord;
		static bool	isSuccess;

		std::string	parse_line(std::string &line);
};

#endif // SEDPP_HPP
