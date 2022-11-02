/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:50:23 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 14:46:57 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("", 25, 5), target("")
{
	std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a):Form(a), target(a.target)
{
	std::cout << "PresidentialPardonForm copy Constructor" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
	(void) a;
	std::cout << "Undefined behavior" << std::endl;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm Parametrized Constructor" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSinged() || executor.getRange() > getEgrade())
		throw Form::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}