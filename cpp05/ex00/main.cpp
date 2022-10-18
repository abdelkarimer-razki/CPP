/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:32 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/18 13:05:25 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	const Bureaucrat a("karim", 2);
	Bureaucrat b;
	b = a;
	std::cout << b.getName() << " " << a.getName() << std::endl;
	std::cout << b.getName() << " " << a.getName() << std::endl;
}