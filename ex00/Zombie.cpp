/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:24 by gclausse          #+#    #+#             */
/*   Updated: 2022/07/09 17:26:37 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << _name << " destructed" << std::endl;
}

std::string	Zombie::getZombieName()
{
	return (this->_name);
}

void Zombie::announce( void )
{

	std::cout << getZombieName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}