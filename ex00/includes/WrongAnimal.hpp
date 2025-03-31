/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:44:30 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 15:31:37 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
/* ------------------------------ Constructors ------------------------------ */
		WrongAnimal(void);
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &animal);
/* ------------------------------- Destructors ------------------------------ */
		~WrongAnimal(void);
/* ---------------------- Assignement operator overload --------------------- */
		WrongAnimal	&operator=(const WrongAnimal &animal);
/* ---------------------------- Public functions ---------------------------- */
		std::string	getType(void) const;
/* ----------------------------- Public methods ----------------------------- */
		void	makeSound(void) const;
};

#endif
