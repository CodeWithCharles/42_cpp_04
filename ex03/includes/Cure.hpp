/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:39:32 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:36:01 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure: public AMateria
{
/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

	public:
/* ------------------------------ Constructors ------------------------------ */
		Cure(void);
		Cure(const Cure &o);

/* ------------------------------- Destructors ------------------------------ */
		~Cure(void);

/* ---------------------- Assignement operator overload --------------------- */
		Cure	&operator=(const Cure &o);

/* ---------------------------- Public functions ---------------------------- */
		virtual Cure		*clone(void) const;

/* ----------------------------- Public methods ----------------------------- */
		virtual void		use(ICharacter &target) const;
};

#endif
