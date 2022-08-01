/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:48:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/01 11:54:53 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* stringPTR;
	std::string& stringREF = str;
	
	stringPTR = &str;
	std::cout << "Memory address of str = " << &str << std::endl;
	std::cout << "Memory address of stringPtr = " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF = " << &stringREF << std::endl << std::endl;

	
	std::cout << "Value of str = " << str << std::endl;
	std::cout << "Value of stringPtr = " << *stringPTR << std::endl;
	std::cout << "Value of stringREF = " << stringREF << std::endl;

	
	return (0);
}