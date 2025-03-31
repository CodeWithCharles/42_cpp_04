/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:06:02 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:36:05 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "AMateria.hpp"

class Character: public ICharacter
{
/* -------------------------------------------------------------------------- */
/*                                 Attributes                                 */
/* -------------------------------------------------------------------------- */

	public:
		static const size_t	inventory_slot_count = 4;
	private:
		std::string	_name;
		AMateria	*_materias[Character::inventory_slot_count];

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

	public:
/* ------------------------------ Constructors ------------------------------ */
		Character(void);
		Character(const std::string &name);
		Character(const Character &o);

/* ------------------------------- Destructors ------------------------------ */
		~Character(void);

/* ---------------------- Assignement operator overload --------------------- */
		Character	&operator=(const Character &o);

/* ---------------------------- Public functions ---------------------------- */
		virtual const std::string	&getName(void) const;

/* ----------------------------- Public methods ----------------------------- */
		virtual void				equip(AMateria *materia);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);

};

#endif
