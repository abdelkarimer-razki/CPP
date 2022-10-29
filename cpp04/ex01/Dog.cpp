/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:49:21 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 14:05:33 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor" << std::endl;
	this->type = "Dog";
	this->dbrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete (dbrain);
}

Dog	&Dog::operator=(Dog const &a)
{
	std::cout << "Dog copy operator\n";
	this->type = a.type;
	delete (this->dbrain);
	this->dbrain = new Brain();
	*(this->dbrain) = *(a.dbrain);
	return (*this);
}

Dog::Dog(Dog const &a)
{
	std::cout << "Dog copy constructor\n";
	this->type = a.type;
	this->dbrain = new Brain();
	*(this->dbrain) = *(a.dbrain);
}

void	Dog::makeSound() const
{
	std::cout << "Dog bark" << std::endl;
}
