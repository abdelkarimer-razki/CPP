/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:36 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/18 18:21:13 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():range(150)
{
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int range):name(name)
{
	std::cout << "Bureaucrat Parametrized constructor" << std::endl;
	try
	{
		if (range > 150)
			throw GradeTooLowException();
		else if (range < 1)
			throw GradeTooHighException();
		else
			this->range = range;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
		this->range = 150;
	}
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

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (range - 1 < 1)
			throw GradeTooHighException();
		else
			this->range--;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (range + 1 > 150)
			throw GradeTooLowException();
		else
			this->range--;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}