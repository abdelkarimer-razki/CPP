/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:36 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/18 13:05:44 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int range):name(name), range(range)
{
	std::cout << "Bureaucrat Parametrized constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat deconstructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &a)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = a;
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getRange() const
{
	return (this->range);
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &a)
{
	this->name = a.name;
	this->range = a.range;
	return (*this);
}
