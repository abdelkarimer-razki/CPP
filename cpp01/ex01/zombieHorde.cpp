/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:13:05 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 17:00:31 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie	*Zombies = new Zombie[N];
		int		i;

		i = -1;
		while (++i < N)
		{
			Zombies[i].name = name;
			Zombies[i].announce();
		}
		return (Zombies);
	}
	return (NULL);
}
