/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:58:40 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/02 13:02:08 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int	main()
{
	Harl	karen;

	std::cout << "Harl debug : " << std::endl;
	karen.complain("debug");
	
	std::cout << "" << std::endl;
	std::cout << "Harl info : " << std::endl;
	karen.complain("info");
	
	std::cout << "" << std::endl;
	std::cout << "Harl warning : " << std::endl;	
	karen.complain("warning");
	
	std::cout << "" << std::endl;
	std::cout << "Harl error : " << std::endl;
	karen.complain("error");

	return (0);
}