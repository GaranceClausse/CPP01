/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:08 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/02 14:34:31 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{

	Zombie	*zomzom;
	std::string	given_name;

	zomzom = newZombie("Franck");
	zomzom->announce();
	randomChump("Viktoria");
	std::cout << "How would you like to name your zombie? -> ";
	std::getline (std::cin, given_name);
	randomChump(given_name);
	delete zomzom;
	return 0;
}