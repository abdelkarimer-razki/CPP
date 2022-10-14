/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:18:59 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/12 13:07:41 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed
{
	private:
		int					store;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(Fixed &a);
		~Fixed();
		Fixed	&operator=(const Fixed &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
#endif