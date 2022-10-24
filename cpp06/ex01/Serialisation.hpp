/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialisation.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:50:33 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/24 09:59:22 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISATION_HPP
#define SERIALISATION_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>

class Data
{
	private:
		std::string name;
		int age;
	public:
		Data(std::string name, int age);
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);	
};

#endif