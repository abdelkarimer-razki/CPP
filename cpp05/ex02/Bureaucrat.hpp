/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:38:34 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/22 02:32:11 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string	name;
		int			range;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &a);
		Bureaucrat(std::string name, int range);
		void	signForm(Form &a) const;
		Bureaucrat	&operator=(Bureaucrat const &a);
		std::string	getName() const;
		int			getRange() const;
		void		incrementGrade();
		void		decrementGrade();
		void 		executeForm(Form const & form);
	class GradeTooHighException:public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("grade is too high\n");
			}
	};
	class GradeTooLowException:public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("grade is too low\n");
			}
	};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &a);


#endif