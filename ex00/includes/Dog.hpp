/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:47:09 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:48:47 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: public Animal
{
	public:
/* ------------------------------ Constructors ------------------------------ */
		Dog(void);
		Dog(const Dog &cat);
/* ------------------------------- Destructors ------------------------------ */
		~Dog(void);
/* ---------------------- Assignement operator overload --------------------- */
		Dog	&operator=(const Dog &cat);
/* ----------------------------- Public methods ----------------------------- */
		void	makeSound(void) const;
};

#endif
