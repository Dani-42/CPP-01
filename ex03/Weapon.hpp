/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:11:45 by datienza          #+#    #+#             */
/*   Updated: 2025/12/05 23:11:47 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon{
public:
	Weapon(std::string str);
	~Weapon();
	
	const std::string&	getType(void) const;
	void		setType(std::string str);

private:
	std::string _type;

};

#endif
