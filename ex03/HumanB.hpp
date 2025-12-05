/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:10:00 by datienza          #+#    #+#             */
/*   Updated: 2025/12/05 23:10:02 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB{
public:
	HumanB(std::string name);
	void	attack() const;
	void		setWeapon(Weapon& nWeapon);
private:
	std::string 	_name;
	Weapon*		_weapon;
	
};

#endif
