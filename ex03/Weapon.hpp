/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:58:37 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 12:53:41 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

class Weapon {

	public :
		Weapon(std::string type) : _type(type) {};
		~Weapon() {};
		std::string const &	getType() const;
		void	setType(std::string type);
		
	private :
		std::string	_type;

};