/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:36 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/22 02:32:00 by aer-razk         ###   ########.fr       */
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
	this->name = a.name;
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

void	Bureaucrat::signForm(Form &a) const
{
	if (a.getSinged())
		std::cout << this->name << " signed " << a.getName() << std::endl;
	else
		std::cout << this->name << " couldn’t sign " << a.getName() << " because grade is too low." << std::endl;
}

void 		Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << this->name << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "eroooor bureaucrat couldn't excecute the form" << std::endl; 
	}
}