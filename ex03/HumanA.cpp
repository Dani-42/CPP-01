/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:09:19 by datienza          #+#    #+#             */
/*   Updated: 2025/12/05 23:09:23 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


	HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _weapon(Weapon) {
}

void	HumanA::attack() const{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
