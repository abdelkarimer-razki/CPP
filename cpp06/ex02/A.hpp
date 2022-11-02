/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:43:17 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 12:42:16 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Base.hpp"

class A:public Base
{
	public:
		virtual void	announce();
		virtual	~A();
};
#endif