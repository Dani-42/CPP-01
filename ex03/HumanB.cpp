/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:09:51 by datienza          #+#    #+#             */
/*   Updated: 2025/12/05 23:09:53 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


	HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

void	HumanB::attack() const {
	
	if (this->_weapon == NULL)
	{
		std::cout << _name << " attacks with their " << "unarmed strike" << std::endl;
		return ;	
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& nWeapon) {
	
	_weapon = &nWeapon;
}
