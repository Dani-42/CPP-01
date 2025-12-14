/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:46:38 by datienza          #+#    #+#             */
/*   Updated: 2025/12/13 13:46:40 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie	*zh;
	int	numZh;

	numZh = 6;
	zh = zombieHorde(numZh, "Horde");
	for (int i = 0; i < numZh; i++)
	{
		std::cout << "Index: " << i << " ";
		zh[i].announce();
	}
	delete[] zh;
	return (0);
}
