/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:27:53 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 16:49:08 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

replacer::replacer(std::string filename, std::string s1, std::string s2)
{
	if	(filename.empty() || s1.empty() || s2.empty())
		errors(0);
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

int	replacer::errors(int i)
{
	if (i == 0)
		std::cerr << "Incorrect args:\n<filename>: is the file from which you want to replace a string.\n<string1>: is the string you want to replace.\n<string2>: is the string you're gonna replace with.";
	else if (i == 1)
		std::cerr << "File doesn't exist." << std::endl;
	exit (1);
}

int	replacer::open_read()
{
	std::string	s;
	int			i;

	i = 0;
	std::ifstream	fn(filename);
	if (!fn)
		return (errors(1));
	std::ofstream fnr(filename + ".replace");
	while (fn)
	{
		getline(fn, s);
		int	j = s.find(s1);
		if (s[j] && j >= 0)
		{
			s.erase(j, s1.length());
			s.insert(j , s2);
		}
		if (i != 0)
			fnr << "\n" + s;
		else
			fnr << s;
		i++;
	}
	fn.close();
	fnr.close();
	return (0);
}
