/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:06:45 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:53:26 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Character.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

Character::Character(void)
{
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
		_materias[i] = NULL;
}

Character::Character(const std::string &name): _name(name)
{
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
		_materias[i] = NULL;
}

Character::Character(const Character &o)
{
	for (unsigned int i(0); i < Character::inventory_slot_count; i++)
	{
		if (o._materias[i])
			this->_materias[i] = o._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

Character::~Character(void)
{
	for (unsigned int i = 0; i < Character::inventory_slot_count; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

/* -------------------------------------------------------------------------- */
/*                        Assignement operator overload                       */
/* -------------------------------------------------------------------------- */

Character	&Character::operator=(const Character &o)
{
	if (this == &o)
		return (*this);
	_name = o._name;
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
	{
		if (_materias[i])
			delete _materias[i];
		_materias[i] = o._materias[i] == NULL ? NULL : o._materias[i]->clone();
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                              Public functions                              */
/* -------------------------------------------------------------------------- */

const std::string	&Character::getName(void) const
{
	return (_name);
}

/* -------------------------------------------------------------------------- */
/*                               Public methods                               */
/* -------------------------------------------------------------------------- */

void	Character::equip(AMateria *materia)
{
	if (materia == NULL)
		return ;
	for (size_t i = 0; i < Character::inventory_slot_count; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = materia->clone();
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || (size_t)idx >= Character::inventory_slot_count)
		return ;
	if (_materias[idx] != NULL)
		delete _materias[idx];
	_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	AMateria	*materia = _materias[idx];

	if (materia == NULL)
		return ;
	materia->use(target);
}
