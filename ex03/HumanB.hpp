/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:55:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 13:11:23 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
	
public:
	HumanB(std::string name) : _name(name) {
		_weapon = NULL;
	};
	~HumanB() {};
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
};

