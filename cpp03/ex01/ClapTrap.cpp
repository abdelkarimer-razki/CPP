/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:07:32 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 11:12:38 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():hitpoint(100), energypoint(50), attackdamage(20)
{
	std::cout << "ClapTrap constructor created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &a)
{
	this->name = a.name;
	this->hitpoint = a.hitpoint;
	this->attackdamage = a.attackdamage;
	this->energypoint = a.energypoint;
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &a)
{
	*this = a;
}

ClapTrap::ClapTrap(std::string name):hitpoint(10), energypoint(10), attackdamage(50)
{
	std::cout << "ClapTrap parametrized constructor created" << std::endl;
	this->name = name;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energypoint > 0 && hitpoint > 0)
	{
		this->energypoint--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has " << energypoint <<" energy points and, "<< hitpoint << " hitpoint!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energypoint > 0 && hitpoint > 0)
	{
		this->energypoint--;
		this->hitpoint += amount;
		std::cout << "ClapTrap " << this->name << " get repaired by " << amount << " hit point!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has " << energypoint <<" energy points and, "<< hitpoint << " hitpoint!!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoint > 0)
	{
		if (this->hitpoint - amount > 0)
			this->hitpoint -= amount;
		else
			this->hitpoint = 0;
		std::cout << "ClapTrap " << this->name << "got damaged by" << amount << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << "has zero hitpoint!" << std::endl;
}