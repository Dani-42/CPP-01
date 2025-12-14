/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:44:40 by datienza          #+#    #+#             */
/*   Updated: 2025/12/13 13:44:42 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	
	Zombie	*Zombie_1;
	
	Zombie_1 = newZombie("Dynamic Zombie");
	randomChump("Random Chump");
	delete Zombie_1;
	return (0);
}
