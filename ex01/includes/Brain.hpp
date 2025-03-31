/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:45:30 by cpoulain          #+#    #+#             */
/*   Updated: 2025/03/31 15:47:46 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

# define IDEA_COUNT 100

class Brain
{
	private:
		std::string	ideas[IDEA_COUNT];
	public:
/* ------------------------------ Constructors ------------------------------ */
		Brain(void);
		Brain(const Brain &brain);
/* ------------------------------- Destructors ------------------------------ */
		~Brain(void);
/* ---------------------- Assignement operator overload --------------------- */
		Brain	&operator=(const Brain &brain);
};

#endif
