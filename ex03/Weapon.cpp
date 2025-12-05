/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:11:51 by datienza          #+#    #+#             */
/*   Updated: 2025/12/05 23:11:53 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(std::string str) : _type(str){
}
	
	Weapon::~Weapon(){
}
	
const std::string&	Weapon::getType(void) const{
	
	return this->_type;
}
	
void		Weapon::setType(std::string str) {
	
	this->_type = str;
}
