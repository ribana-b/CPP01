/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 01:57:26 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/28 16:15:33 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Sedpp.hpp"

Sedpp::Sedpp(std::string &filename, std::string &oldWord, std::string &newWord)
{
	this->filename = filename;
	this->oldWord = oldWord;
	this->newWord = newWord;
}

std::string	Sedpp::get_old_word(void)
{
	return (oldWord);
}

std::string	Sedpp::get_new_word(void)
{
	return (newWord);
}

std::string	Sedpp::get_filename(void)
{
	return (filename);
}

void	Sedpp::set_old_word(std::string &oldWord)
{
	this->oldWord = oldWord;
}

void	Sedpp::set_new_word(std::string &newWord)
{
	this->newWord = newWord;
}

void	Sedpp::set_filename(std::string &filename)
{
	this->filename = filename;
}

bool	Sedpp::isSuccess = true;
bool	Sedpp::is_success(void)
{
	return (isSuccess);
}

std::string	Sedpp::parse_line(std::string &line)
{
	std::size_t	pos = 0;
	std::string	parsedLine = "";
	while (true)
	{
		std::size_t	found = line.find(oldWord.c_str(), pos);
		if (found == std::string::npos)
		{
			parsedLine.append(line, pos, line.length() - pos);
			break ;
		}
		parsedLine.append(line, pos, found - pos);
		parsedLine += newWord.c_str();
		pos = found + oldWord.length();
	}
	return (parsedLine);
}

std::string	Sedpp::global_replace(void)
{
	std::string		replacedLine;
	std::ifstream	infile;
	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		isSuccess = false;
		return ("");
	}
	std::string	line;
	bool	firstLine = true;
	while (getline(infile, line))
	{
		if (!firstLine)
			replacedLine += "\n";
		replacedLine += parse_line(line);
		firstLine = false;
	}
	infile.close();
	if (line.empty())
		replacedLine += "\n";
	return (replacedLine);
}

void	Sedpp::global_replace_to_file()
{
	std::ofstream	outfile;
	std::string		newFilename = filename + ".replace";

	outfile.open(newFilename.c_str());
	if (!outfile.is_open())
	{
		isSuccess = false;
		return ;
	}
	outfile << global_replace();
	outfile.close();
}

void	Sedpp::global_replace_to_file(std::string &filename)
{
	std::ofstream	outfile;

	outfile.open(filename.c_str());
	if (!outfile.is_open())
	{
		isSuccess = false;
		return ;
	}
	outfile << global_replace();
	outfile.close();
}
