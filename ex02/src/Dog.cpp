/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:57:50 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 16:48:36 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Dog::Dog(void): AAnimal("Dog")
{
	brain = new Brain();
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog): AAnimal(dog), brain(NULL)
{
	*this = dog;
	std::cout << "Dog: Copy constructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

Dog::~Dog(void)
{
	if (brain != NULL)
		delete brain;
	std::cout << "Dog: Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

Dog	&Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return (*this);
	AAnimal::operator=(dog);
	if (brain != NULL)
		delete brain;
	brain = new Brain(*dog.brain);
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	Dog::makeSound(void) const
{
	std::cout << "Bark !" << std::endl;
}
