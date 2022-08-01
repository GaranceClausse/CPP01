/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:01:25 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 12:51:33 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void		Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string const &	Weapon::getType(void) const
{
	return this->_type;
}