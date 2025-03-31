/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:23:20 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 18:36:46 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

void	learn(IMateriaSource *src)
{
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	delete ice;
	delete cure;
}

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	ICharacter		*me = new Character("me");
	ICharacter		*bob = new Character("bob");
	AMateria		*ice;
	AMateria		*cure;

	learn(src);
	ice = src->createMateria("ice");
	cure = src->createMateria("cure");

	me->equip(ice);
	me->equip(cure);

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	me->unequip(0);
	me->equip(cure);

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;

	return (0);
}
