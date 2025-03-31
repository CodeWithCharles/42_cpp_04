/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:47:09 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:48:27 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat: public Animal
{
	public:
/* ------------------------------ Constructors ------------------------------ */
		Cat(void);
		Cat(const Cat &cat);
/* ------------------------------- Destructors ------------------------------ */
		~Cat(void);
/* ---------------------- Assignement operator overload --------------------- */
		Cat	&operator=(const Cat &cat);
/* ----------------------------- Public methods ----------------------------- */
		void	makeSound(void) const;
};

#endif
