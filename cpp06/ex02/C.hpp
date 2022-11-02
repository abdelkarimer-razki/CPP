/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:43:24 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 12:42:11 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Base.hpp"

class C:public Base
{
	public:
		virtual void	announce();
		virtual	~C();
};
#endif