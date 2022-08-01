/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:10:51 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 11:45:47 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*Horde = NULL;
	std::string	given_name;
	std::string	nb_zomb = "2";
	int			int_zomb;
	int	i = 0;

	std::istringstream is(nb_zomb);
	is >> int_zomb;
	Horde = Horde->zombieHorde(int_zomb, "Franck");
	while (i < int_zomb)
	{
		Horde[i].announce();
		i++;
	}
	std::cout << "How would you like to name your zombie? -> ";
	std::getline (std::cin, given_name);
	std::cout << "How many zombies in the hord? -> ";
	std::cin >> nb_zomb;
	std::istringstream iss(nb_zomb);
	iss >> int_zomb;
	Horde = Horde->zombieHorde(int_zomb, given_name);
	i = 0;
	while (i < int_zomb)
	{
		Horde[i].announce();
		i++;
	}
	delete [] Horde;
	return 0;
}