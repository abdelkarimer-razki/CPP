/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:50:27 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 14:45:30 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("", 145, 137), target("")
{
	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a):Form(a), target(a.target)
{
	std::cout << "ShrubberyCreationForm copy Constructor" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &a)
{
	(void) a;
	std::cout << "Undefined behavior" << std::endl;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm Parametrized Constructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSinged() || executor.getRange() > getEgrade())
		throw Form::GradeTooLowException();
	std::ofstream fnr(this->target + "_shrubbery");
	fnr <<  "                                               |"	<< std::endl;
	fnr <<  "                                              -x-"	<< std::endl;
	fnr <<  "                                               |"	<< std::endl;
	fnr <<  "              v .   ._, |_  .,"	<< std::endl;
	fnr <<  "           `-._\\/  .  \\ /    |/_"	<< std::endl;
	fnr <<  "               \\  _\\, y | \\//"	<< std::endl;
	fnr <<  "         _\\_.___\\, \\/ -.\\||"	<< std::endl;
	fnr <<  "           `7-,--.`._||  / / ,"	<< std::endl;
	fnr <<  "           /'     `-. `./ / |/_.'"	<< std::endl;
	fnr <<  "                     |    |//"	<< std::endl;
	fnr <<  "                     |_    /"	<< std::endl;
	fnr <<  "                     |-   |"	<< std::endl;
	fnr <<  "                     |   =|"	<< std::endl;
	fnr <<  "                     |    |"	<< std::endl;
	fnr <<  "--------------------/ ,  . \\--------._"	<< std::endl;
	fnr.close();
}