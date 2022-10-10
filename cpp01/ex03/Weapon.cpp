/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:26:49 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 18:51:53 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void)
{
	return (*this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = &type;
}

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = &type;
}
