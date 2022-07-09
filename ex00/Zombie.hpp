/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:27 by gclausse          #+#    #+#             */
/*   Updated: 2022/07/09 17:26:08 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <string>

class Zombie {

	public :
		Zombie(void) {};
		~Zombie(void);
		std::string	getZombieName();
		void announce( void );
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );
		void	setZombieName(std::string name);

	private :
		std::string	_name;

};