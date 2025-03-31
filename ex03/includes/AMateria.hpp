/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:55:54 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:36:10 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
/* ------------------------------ Constructors ------------------------------ */
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &o);

/* ------------------------------- Destructors ------------------------------ */
		virtual ~AMateria(void);

/* ---------------------- Assignement operator overload --------------------- */
		AMateria			&operator=(AMateria const &aMateria);

/* ----------------------------- Public methods ----------------------------- */
		virtual void	use(ICharacter &target) const;

/* ---------------------------- Public functions ---------------------------- */
		const	std::string	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
};

#endif
