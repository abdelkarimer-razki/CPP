/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:50:55 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/03 16:58:02 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name(""), _signed(0), s_grade(150), e_grade(150)
{
	std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(std::string name, int s_grade, int e_grade): name(name), _signed(0), s_grade(s_grade), e_grade(e_grade)
{
	std::cout << "Form Parameterized Constructor" << std::endl;
	if (this->s_grade > 150 || this->e_grade > 150)
		throw Form::GradeTooLowException();
	else if (this->s_grade < 1 || this->e_grade < 1)
		throw Form::GradeTooHighException();
}

Form::~Form()
{
	std::cout << "Form deconstructor" << std::endl;
}

Form::Form(Form const &a):name(a.name), _signed(a._signed), s_grade(a.s_grade), e_grade(a.e_grade)
{
	std::cout << "Form Copy Constructor" << std::endl;
}

Form	&Form::operator=(Form const &a)
{
	(void) a;
	std::cout << "Undefined behavior" << std::endl;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSinged() const
{
	return (this->_signed);
}

int	Form::getSgrade() const
{
	return (this->s_grade);	
}

int Form::getEgrade() const
{
	return (this->e_grade);
}

void	Form::beSigned(Bureaucrat a)
{
	if (a.getRange() > s_grade)
		throw Form::GradeTooLowException();	
	_signed = true;
}

std::ostream	&operator<<(std::ostream &o, const Form &a)
{
	o << a.getName() << " Form." << std::endl << "Signed?: " << a.getSinged() << std::endl << "Execution grade: " << a.getEgrade() << std::endl << "Signing grade: " << a.getSgrade();
	return (o);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low\n");
}
