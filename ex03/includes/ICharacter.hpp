/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:59:47 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:35:52 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <iostream>

class AMateria;

class ICharacter
{
	public:
/* ------------------------------- Destructors ------------------------------ */
		virtual	~ICharacter(void) { };
/* ---------------------------- Public functions ---------------------------- */
		virtual const std::string	&getName(void) const = 0;
/* ----------------------------- Public methods ----------------------------- */
		virtual void				equip(AMateria *materia) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};

#endif
