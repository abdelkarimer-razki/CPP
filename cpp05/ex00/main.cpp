/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:32 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/18 18:55:38 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("karim", 651651);
	Bureaucrat b("karim", 1);
	Bureaucrat c("karim", 150);
	b.incrementGrade();
	c.decrementGrade();
	std::cout << a << std::endl;
}