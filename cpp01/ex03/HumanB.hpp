/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:26:53 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 18:59:27 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		&my_weapon;
		std::string	name;
	public:
		HumanB();
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon1);
		void	attack(void);
};
#endif
