/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:32 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/30 15:20:55 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat a;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presinsdfgdsfgdsfrdon", "Bender");
		rrf->beSigned(a);
		delete (rrf);	
	}
	catch (std::exception &e)
	{
		std::cout << "error\n";
	}
}