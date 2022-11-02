/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:43:20 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 12:56:15 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base*(*declare[3])() = {&create_a, &create_b, &create_c};
	int i = rand() % 3;
	return ((*declare[i])());
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a != NULL)
		a->announce();
	else if (b != NULL)
		b->announce();
	else if (c != NULL)
		c->announce();
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		a.announce();
	}
	catch(std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			b.announce();
		}
		catch(std::exception &e)
		{
			C &c = dynamic_cast<C&>(p);
			c.announce();
		}
	}
}

Base::~Base()
{

}

Base *create_a()
{
	return (new A);
}

Base *create_b()
{
	return (new B);
}

Base *create_c()
{
	return (new C);
}