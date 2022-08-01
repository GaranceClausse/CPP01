/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:10:58 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 11:45:08 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

class Zombie {

	public :
		Zombie(void) {};
		~Zombie(void);
		std::string	getZombieName();
		void announce( void );
		Zombie*	newZombie( std::string name );
		Zombie* zombieHorde( int N, std::string name );
		void	setZombieName(std::string name);

	private :
		std::string	_name;

};