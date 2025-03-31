/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:23:37 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:35:45 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
/* -------------------------------------------------------------------------- */
/*                                 Attributes                                 */
/* -------------------------------------------------------------------------- */

	public:
		static const size_t	slot_count = 4;
	private:
		AMateria	*_materias[MateriaSource::slot_count];

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

	public:
/* ------------------------------ Constructors ------------------------------ */
		MateriaSource(void);
		MateriaSource(const MateriaSource &o);

/* ------------------------------- Destructors ------------------------------ */
		~MateriaSource(void);

/* ---------------------- Assignement operator overload --------------------- */
		MateriaSource		&operator=(const MateriaSource &o);

/* ----------------------------- Public methods ----------------------------- */
		virtual void		learnMateria(AMateria *materia);

/* ---------------------------- Public functions ---------------------------- */
		virtual AMateria	*createMateria(const std::string &type);
};

#endif
