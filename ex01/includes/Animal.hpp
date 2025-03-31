/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:44:30 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 15:32:45 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
/* ------------------------------ Constructors ------------------------------ */
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &animal);
/* ------------------------------- Destructors ------------------------------ */
		virtual ~Animal(void);
/* ---------------------- Assignement operator overload --------------------- */
		Animal	&operator=(const Animal &animal);
/* ---------------------------- Public functions ---------------------------- */
		std::string	getType(void) const;
/* ----------------------------- Public methods ----------------------------- */
		virtual void	makeSound(void) const;
};

#endif
