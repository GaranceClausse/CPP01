/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:58:39 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 13:16:51 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	
}

void	HumanB::attack() const {
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " can't attack without a weapon !" << std::endl ;
	}
	else
		std::cout << this->_name << " attacks with " << (*(this->_weapon)).getType() << std::endl ;	
}