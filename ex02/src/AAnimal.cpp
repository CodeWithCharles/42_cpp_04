/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:49:02 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 16:47:59 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

AAnimal::AAnimal(void): type("animal")
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type): type(type)
{
	std::cout << "AAnimal: Type constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal): type(animal.type)
{
	std::cout << "AAnimal: Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	if (this == &animal)
		return (*this);
	this->type = animal.type;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                              Public functions                              */
/* -------------------------------------------------------------------------- */

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
