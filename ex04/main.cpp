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
		std::cerr << "Error: Invalid number of arguments " << 
					"<filename> <str1> <str2>" << std::endl;
		return 1;
	}

	return 0;
}