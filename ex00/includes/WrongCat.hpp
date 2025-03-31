/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:47:09 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 14:48:27 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
/* ------------------------------ Constructors ------------------------------ */
		WrongCat(void);
		WrongCat(const WrongCat &cat);
/* ------------------------------- Destructors ------------------------------ */
		~WrongCat(void);
/* ---------------------- Assignement operator overload --------------------- */
		WrongCat	&operator=(const WrongCat &cat);
/* ----------------------------- Public methods ----------------------------- */
		void	makeSound(void) const;
};

#endif
