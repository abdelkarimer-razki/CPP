/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:55:28 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 11:18:38 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor created" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap parametrized constructor created" << std::endl;
	this->hitpoint = 100;
	this->energypoint = 50;
	this->attackdamage = 20;	
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (energypoint > 0 && hitpoint > 0)
	{
		this->energypoint--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " has " << energypoint <<" energy points and, "<< hitpoint << " hitpoint!!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &srap)
{
	*this = srap;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &srap)
{
	this->name = srap.name;
	this->hitpoint = srap.hitpoint;
	this->attackdamage = srap.attackdamage;
	this->energypoint = srap.energypoint;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gate keeper mode" << std::endl;
}