/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:36 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 09:37:39 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():range(150)
{
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int range):name(name), range(range)
{
	std::cout << "Bureaucrat Parametrized constructor" << std::endl;
	if (range > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (range < 1)
		throw Bureaucrat::GradeTooHighException();
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
	this->range = a.range;
	return (*this);
}

void	Bureaucrat::incrementGrade()
{
	this->range--;
	if (this->range < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	this->range++;
	if (this->range > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &a)
{
	o << a.getName() << ", bureaucrat grade " << a.getRange();
	return (o);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low\n");
}
