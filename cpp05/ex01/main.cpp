/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:32 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 17:20:43 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try 
	{
		Bureaucrat a("karim", 5);
		Bureaucrat b("brahim", 1);
		Form c("zwaj", 3, 55);
		std::cout << c.getEgrade() << std::endl;
		c.beSigned(b);
		std::cout << c << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}