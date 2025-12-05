/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:09:38 by datienza          #+#    #+#             */
/*   Updated: 2025/12/05 23:09:40 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA{
public:
	HumanA(std::string name, Weapon& Weapon);
	void	attack() const;
private:
	std::string _name;
	Weapon&		_weapon;
};

#endif
