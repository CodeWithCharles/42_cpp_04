/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:44:30 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 16:47:15 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	public:
/* ------------------------------ Constructors ------------------------------ */
		AAnimal(void);
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &animal);
/* ------------------------------- Destructors ------------------------------ */
		virtual ~AAnimal(void);
/* ---------------------- Assignement operator overload --------------------- */
		AAnimal	&operator=(const AAnimal &animal);
/* ---------------------------- Public functions ---------------------------- */
		std::string	getType(void) const;
/* ----------------------------- Public methods ----------------------------- */
		virtual void	makeSound(void) const = 0;
};

#endif
