/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:53:21 by datienza          #+#    #+#             */
/*   Updated: 2025/12/08 21:55:29 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl harlFilter;

	if (argc == 2)
	{
		std::string	str = argv[1];
		harlFilter.complain(str);
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	return 0;
}
