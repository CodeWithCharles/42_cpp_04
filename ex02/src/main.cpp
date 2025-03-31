/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:36:32 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 16:49:23 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"

# define ANI_COUNT 10

int	main(void)
{
	const AAnimal	*a;
	const AAnimal	*b;
	const AAnimal	*c;
	const AAnimal	*d;
	const AAnimal	*e;
	const AAnimal	*f;
	AAnimal	*animals[ANI_COUNT];

	a = new Cat();
	b = new Dog();
	delete a;
	delete b;

	d = new Cat();
	c = d;
	delete d;

	f = new Dog();
	e = f;
	delete f;
	for (size_t i = 0; i < ANI_COUNT; ++i)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (size_t i = 0; i < ANI_COUNT; ++i)
		delete animals[i];
	return (0);
}
