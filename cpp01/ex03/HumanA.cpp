/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:26:58 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 19:01:51 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->my_weapon.getType() << std::endl;
}

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &my_weapon):my_weapon(my_weapon),name(name)
{
}
