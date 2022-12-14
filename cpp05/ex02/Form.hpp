/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:50:57 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/03 16:59:41 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				_signed;
		const int			s_grade;
		const int			e_grade;
	public:
		Form();
		virtual ~Form();
		Form(Form const &a);
		Form(std::string name, int s_grade, int e_grade);
		Form		&operator=(Form const &a);
		std::string	getName() const;
		bool		getSinged() const;
		int			getSgrade() const;
		int			getEgrade() const;
		void	beSigned(Bureaucrat a);
		virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException:public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	class GradeTooLowException:public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Form &a);

#endif