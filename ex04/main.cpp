/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:21:38 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/02 15:20:29 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

void	my_replace(std::string *line, std::string to_search, std::string to_write)
{
	size_t pos ;

	while ((pos = (*line).find(to_search)) != std::string::npos)
	{
		(*line).erase(pos, to_search.length());
		(*line).insert(pos, to_write);		
	}
	
}

int	main(int argc, char **argv)
{
	std::string line;

	if (argc != 4 || ((std::string)argv[1]).empty() || ((std::string)argv[2]).empty())
		std::cout << "Please enter 3 parameters in the following order : a filename and two strings s1 and s2" << std::endl;
	
	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cout << "Couldn't open the infile" << std::endl;
		return (1);
	}
	
	std::string	ofile_name = ((std::string)argv[1] + ".replace");
	std::ofstream	ofs(ofile_name.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Couldn't create the outfile" << std::endl;
		return (1);
	}
	if(ifs && ofs){
 
        while(getline(ifs, line)){
			my_replace(&line, argv[2], argv[3]);
            	ofs << line;
				if (!ifs.eof())
					ofs << std::endl;
        }
		line.erase(0, 1);
    }	
	ofs.close();
	ifs.close();
}
