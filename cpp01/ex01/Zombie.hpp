/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:11:30 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 17:02:05 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		void	announce(void);
		Zombie	*newZombie(std::string name);
		Zombie* zombieHorde(int N, std::string name);
		void	randomChump(std::string name);
};

#endif