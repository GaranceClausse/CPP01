/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:11:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/07/09 17:48:52 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie* zombie = new Zombie[N];

	while (N >= 0)
	{
		zombie->setZombieName(name);
		N--;
	}
	return (zombie);
}
