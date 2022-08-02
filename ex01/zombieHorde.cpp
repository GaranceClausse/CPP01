/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:11:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/02 15:03:48 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombie = new Zombie[N];
	int i = 0;

	while (i < N)
	{
		zombie[i].setZombieName(name);
		zombie[i].announce();
		i++;
	}
	return (zombie);
}
