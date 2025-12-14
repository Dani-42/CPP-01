/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:44:28 by datienza          #+#    #+#             */
/*   Updated: 2025/12/13 13:44:31 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

	Zombie::Zombie(std::string name) : _name(name) {
		std::cout << "Create Zombie object " << _name << std::endl;
}
	Zombie::~Zombie(void){
		std::cout << "Destroy Zombie object " << _name << std::endl;
}
void Zombie::announce() const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...." << std::endl;
}

