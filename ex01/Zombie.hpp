/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:47:23 by datienza          #+#    #+#             */
/*   Updated: 2025/12/13 13:47:25 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
public:
	Zombie(void);
	~Zombie(void);
	void 	announce() const;
	void	set_name(std::string n);
private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
