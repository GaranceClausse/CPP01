/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:10:51 by gclausse          #+#    #+#             */
/*   Updated: 2022/07/09 17:48:38 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;
	Zombie	*zomzom;
	std::string	given_name;

	zomzom = zombie.newZombie("Franck");
	zomzom->announce();
	std::cout << "How would you like to name your zombie? -> ";
	std::getline (std::cin, given_name);
	zombie.zombieHorde(6, given_name);
	delete zomzom;
	return 0;
}