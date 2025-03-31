/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:47:09 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:48:27 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_H
# define WRONGDOG_H

# include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
/* ------------------------------ Constructors ------------------------------ */
		WrongDog(void);
		WrongDog(const WrongDog &cat);
/* ------------------------------- Destructors ------------------------------ */
		~WrongDog(void);
/* ---------------------- Assignement operator overload --------------------- */
		WrongDog	&operator=(const WrongDog &cat);
/* ----------------------------- Public methods ----------------------------- */
		void	makeSound(void) const;
};

#endif
