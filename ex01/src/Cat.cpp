/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:54:32 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 16:12:03 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Cat::Cat(void): Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat), brain(NULL)
{
	*this = cat;
	std::cout << "Cat: Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

Cat::~Cat(void)
{
	if (brain != NULL)
		delete brain;
	std::cout << "Cat: Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

Cat	&Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return (*this);
	Animal::operator=(cat);
	if (brain != NULL)
		delete brain;
	brain = new Brain(*cat.brain);
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound(void) const
{
	std::cout << "Meoooooow !" << std::endl;
}
