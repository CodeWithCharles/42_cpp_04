/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:27:55 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 15:31:29 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongDog.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

WrongDog::WrongDog(void): WrongAnimal("WrongDog")
{
	std::cout << "WrongDog: Default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &wrongDog): WrongAnimal(wrongDog)
{
	std::cout << "WrongDog: Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog: Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

WrongDog	&WrongDog::operator=(const WrongDog &wrongDog)
{
	*static_cast<WrongAnimal *>(this) = wrongDog;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	WrongDog::makeSound(void) const
{
	std::cout << "Bark !" << std::endl;
}
