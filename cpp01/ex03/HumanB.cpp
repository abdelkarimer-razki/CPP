/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:26:55 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/11 11:25:19 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if(this->my_weapon == nullptr)
		return ;
	std::cout << this->name << " attacks with their " << this->my_weapon->getType() << std::endl;
}

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &weapon1)
{
	this->my_weapon = &weapon1;
}
