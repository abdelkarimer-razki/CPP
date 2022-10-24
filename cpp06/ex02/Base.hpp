/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:43:22 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/24 11:31:41 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

class Base
{
	private:
		Base *create_a(void);
		Base *create_b(void);
		Base *create_c(void);
	public:
		virtual Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
		virtual void announce();
};
#endif