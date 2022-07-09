/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:18 by gclausse          #+#    #+#             */
/*   Updated: 2022/07/09 17:27:14 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;
}

void	Zombie::randomChump( std::string name )
{
	Zombie	zombie;

	zombie.setZombieName(name);
	zombie.announce();
}