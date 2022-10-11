/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:28:01 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/11 18:34:14 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP
#include <iostream>
#include <string>
#include <fstream>

class	replacer
{
	private:
		std::string	filename;
		std::string	s1;
		std::string	s2;
	public:
		replacer(std::string filename, std::string s1, std::string s2);
		int	open_read();
		int	errors(int i);
};
#endif