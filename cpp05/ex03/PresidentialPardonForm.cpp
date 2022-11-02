/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:50:23 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 09:52:02 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():target(""), s_grade(25), e_grade(5)
{
	std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a):target(a.target), s_grade(a.s_grade), e_grade(a.e_grade)
{
	std::cout << "PresidentialPardonForm copy Constructor" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
	(void) a;
	std::cout << "Undefined behavior" << std::endl;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):target(target), s_grade(25), e_grade(5)
{
	std::cout << "PresidentialPardonForm Parametrized Constructor" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSinged() || executor.getRange() > e_grade)
		throw Form::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}