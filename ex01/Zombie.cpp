/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:10:54 by gclausse          #+#    #+#             */
/*   Updated: 2022/07/09 17:45:41 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << _name << " destructed" << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getZombieName()
{
	return (this->_name);
}

void Zombie::announce( void )
{

	std::cout << getZombieName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}