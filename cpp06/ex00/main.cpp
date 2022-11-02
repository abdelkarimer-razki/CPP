/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:57:07 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 10:35:42 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int arc, char **arv)
{
	if (arc == 2)
	{
		try
		{
			Conversion a;
			a.check_points(arv[1]);
			if (a.check_lil(arv[1]))
				a.fill_lil(arv[1]);
			else if (a.check_float(arv[1]))
				a.fill_float(arv[1]);
			else if (a.check_double(arv[1]))
				a.fill_double(arv[1]);
			else if (a.check_int(arv[1]))
				a.fill_int(arv[1]);
			else if (a.check_char(arv[1]))
				a.fill_char(arv[1]);
			a.show_results();
		}
		catch(std::exception &e)
		{
			std::cout << "agrs erorr\n";
		}
	}
	else
		std::cout << "Wrong number of args.\nProgram accepts one arg.";
}
