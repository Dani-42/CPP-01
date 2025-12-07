/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 11:07:17 by datienza          #+#    #+#             */
/*   Updated: 2025/12/07 11:13:06 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int	main(int argc, char **argv)
{	
	
	if (argc == 4)
	{
		FileReplacer	_replacer(argv[1], argv[2], argv[3]);

		if (!_replacer.execute())
			return 1;
	}
	else
	{
		std::cerr << "<filename> <str1> <str2>" << std::endl;
		return 1;
	}

	return 0;
}



/*

void	search_remplece(std::string& str, const std::string& s1, const std::string& s2)
{
	size_t p = 0;
	
	while (1)
	{
		p = str.find(s1, p);
		if (p == std::string::npos)
			break ;
		str.erase(p, s1.length());
		str.insert(p, s2);
		p += s2.length();
	}
}


int	main(int argc, char **argv)
{	
	if (argc == 4)
	{
		std::ifstream infile(argv[1]);
		if (!infile.is_open())
		{
			std::cout << "Error file open" << std::endl;
			return 1;
		}
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ofstream outfile("outfile.txt");
		std::string line;
		while (std::getline(infile, line))
		{
			search_remplece(line, s1, s2);
			outfile << line << std::endl;
		}
	}
	else
	{
		std::cout << "<filename> <str1> <str2>" << std::endl;
		return 1;
	}

	return 0;
}
*/