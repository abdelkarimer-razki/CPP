/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:38:10 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/30 15:20:18 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form	*Intern::makeForm(std::string f_form, std::string f_name)
{
	int i = -1;
	(void) f_name;
	std::string array[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form*(Intern::*declare[3])(std::string f_name) = {&Intern::createRobot, &Intern::createPres, &Intern::createShruby};
	while (++i < 3 && f_form != array[i]);
	if (i < 3)
		return ((this->*declare[i])(f_name));
	throw (std::exception());
}

Form	*Intern::createPres(std::string f_name)
{
	return (new PresidentialPardonForm(f_name));
}

Form	*Intern::createShruby(std::string f_name)
{
	return (new ShrubberyCreationForm(f_name));
}

Form	*Intern::createRobot(std::string f_name)
{
	return (new RobotomyRequestForm(f_name));
}