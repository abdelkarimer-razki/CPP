/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:00:24 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 11:18:50 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor created" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FragTrap parametrized constructor created" << std::endl;
	this->hitpoint = 100;
	this->energypoint = 100;
	this->attackdamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "positive high fives request" << std::endl;
}

FragTrap::FragTrap(FragTrap const &srap)
{
	*this = srap;
}

FragTrap	&FragTrap::operator=(const FragTrap &srap)
{
	this->name = srap.name;
	this->hitpoint = srap.hitpoint;
	this->attackdamage = srap.attackdamage;
	this->energypoint = srap.energypoint;
	return (*this);
}
