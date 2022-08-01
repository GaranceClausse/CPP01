/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:08 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 11:31:26 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;
	Zombie	yourzombie;
	Zombie	*zomzom;
	std::string	given_name;

	zomzom = zombie.newZombie("Franck");
	zomzom->announce();
	zombie.randomChump("Viktoria");
	std::cout << "How would you like to name your zombie? -> ";
	std::getline (std::cin, given_name);
	yourzombie.randomChump(given_name);
	delete zomzom;
	return 0;
}