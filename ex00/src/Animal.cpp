/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:49:02 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:54:16 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Animal::Animal(void): type("animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const std::string &type): type(type)
{
	std::cout << "Animal: Type constructor called" << std::endl;
}

Animal::Animal(const Animal &animal): type(animal.type)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

Animal	&Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                              Public functions                              */
/* -------------------------------------------------------------------------- */

std::string	Animal::getType(void) const
{
	return (this->type);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}
