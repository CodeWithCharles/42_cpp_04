/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:47:09 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 16:47:53 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain	*brain;
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
