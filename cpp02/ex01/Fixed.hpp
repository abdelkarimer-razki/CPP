/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:09:58 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/25 11:28:49 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					store;
		static const int	bits = 8;
	public:
		Fixed();   
		Fixed(Fixed const &a);
		Fixed(const int store);
		Fixed(const float store);
		~Fixed();
		Fixed	&operator=(const Fixed &a); 
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
std::ostream	&operator<<(std::ostream &o, const Fixed &a);
#endif