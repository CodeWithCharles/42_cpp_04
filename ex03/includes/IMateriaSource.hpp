/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:02:32 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:35:49 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.hpp"

class IMateriaSource
{
	public:
/* ------------------------------- Destructors ------------------------------ */
		virtual	~IMateriaSource(void) { };
/* ----------------------------- Public methods ----------------------------- */
		virtual void		learnMateria(AMateria *materia) = 0;
/* ---------------------------- Public functions ---------------------------- */
		virtual AMateria	*createMateria(const std::string &type) = 0;
};

#endif
