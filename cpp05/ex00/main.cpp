/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:32 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/19 13:56:09 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("karim", 456456);
		Bureaucrat b("karim", 1);
		Bureaucrat c("karim", 150);
		b.incrementGrade();
		c.decrementGrade();
		std::cout << a << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}