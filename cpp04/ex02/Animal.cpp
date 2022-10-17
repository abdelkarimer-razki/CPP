/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:47:00 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 15:45:00 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal	&Animal::operator=(Animal const &a)
{
	this->type = a.type;
	return (*this);
}

Animal::Animal(Animal const &a)
{
	*this = a;
}

std::string	Animal::getType() const
{
	return	(this->type);
}