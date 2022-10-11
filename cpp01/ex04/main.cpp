/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:27:56 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/11 15:48:35 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int	main(int arc, char **arg)
{
	if (arc == 4)
	{
		replacer rp(arg[1], arg[2], arg[3]);
		return (rp.open_read());
	}
	else
	{
		std::cerr << "Wrong number of args : <filename> <string1> <string2>" << std::endl;
		return (1);
	}
}
