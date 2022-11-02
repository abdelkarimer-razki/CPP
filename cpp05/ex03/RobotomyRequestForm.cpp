/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:50:25 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 14:46:21 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("", 72, 45), target("")
{
	std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a):Form(a), target(a.target)
{
	std::cout << "RobotomyRequestForm copy Constructor" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
{
	(void) a;
	std::cout << "Undefined behavior" << std::endl;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm Parametrized Constructor" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSinged() || executor.getRange() > getEgrade())
	{
		std::cout << " the robotomy failed" << std::endl;
		throw Form::GradeTooLowException();
	}
	std::cout << " waaaaaaaaaaaaaaaa" << std::endl;
	std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
}