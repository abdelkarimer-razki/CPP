/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:24:24 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/06 12:24:26 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int arc, char **arv) {
	int	i;
	int	j;

	j = 0;
	if (arc > 1)
	{
		while (i = -1, ++j < arc)
		{
			while (arv[j][++i])
			{
				if (arv[j][i] >= 'a' && arv[j][i] <= 'z')
					arv[j][i] = (char)toupper(arv[j][i]);
				std::cout << (char)arv[j][i];
			}
		}
	}
	else if (arc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  return (0);
}
