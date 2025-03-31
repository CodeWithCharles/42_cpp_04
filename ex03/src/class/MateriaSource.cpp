/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:56:40 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:50:00 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/MateriaSource.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &o)
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		_materias[i] = NULL;
	*this = o;
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		if (_materias[i] != NULL)
			delete _materias[i];
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

MateriaSource	&MateriaSource::operator=(const MateriaSource &o)
{
	if (this == &o)
		return (*this);
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
		_materias[i] = o._materias[i] == NULL ? NULL : o._materias[i]->clone();
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                              Public functions                              */
/* -------------------------------------------------------------------------- */

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (size_t i = 0; i < MateriaSource::slot_count; i++)
		if (_materias[i]->getType() == type)
			return (_materias[i]->clone());
	return (NULL);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	MateriaSource::learnMateria(AMateria *materia)
{
	size_t	i;
	if (materia == NULL)
		return ;

	for (i = 0; i < MateriaSource::slot_count && this->_materias[i]
		&& this->_materias[i]->getType() != materia->getType(); i++);
	if (i < MateriaSource::slot_count)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = materia->clone();
	}
}
