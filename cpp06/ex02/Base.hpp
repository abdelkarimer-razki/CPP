/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:43:22 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 12:51:47 by aer-razk         ###   ########.fr       */
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
	public:
		virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
Base *create_a(void);
Base *create_b(void);
Base *create_c(void);

#endif