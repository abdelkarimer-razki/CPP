/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:00:53 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/24 08:58:14 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
   
class Conversion
{
	private:
		float	inf;
		int		ini;
		double	ind;
		char	inc;
		bool	check;
	public:
		Conversion();
		bool	check_lil(char *str);
		bool	check_int(char *str);
		bool	check_float(char *str);
		bool	check_double(char *str);
		bool	check_char(char *str);
		void	fill_int(char *str);
		void	fill_float(char *str);
		void	fill_double(char *str);
		void	fill_lil(char *str);
		void	fill_char(char *str);
		void	show_results();
	
};

#endif