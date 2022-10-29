/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:08:24 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 14:02:36 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &a)
{
	this->type = a.type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	*this = a;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongCat dosen't bark" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return	(this->type);
}