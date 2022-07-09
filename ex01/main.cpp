/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:10:51 by gclausse          #+#    #+#             */
/*   Updated: 2022/07/09 18:35:37 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*Horde;
	std::string	given_name;
	std::string			nb_zomb = "2";
	int	i = 0;

	Horde = Horde->zombieHorde(stoi(nb_zomb), "Franck");
	while (i < stoi(nb_zomb))
	{
		Horde[i].announce();
		i++;
	}
	std::cout << "How would you like to name your zombie? -> ";
	std::getline (std::cin, given_name);
	std::cout << "How many zombies in the hord? -> ";
	std::cin >> nb_zomb;
	Horde = Horde->zombieHorde(stoi(nb_zomb), given_name);
	i = 0;
	while (i < stoi(nb_zomb))
	{
		Horde[i].announce();
		i++;
	}
	delete [] Horde;
	return 0;
}