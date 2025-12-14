/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 19:42:25 by datienza          #+#    #+#             */
/*   Updated: 2025/12/13 13:50:11 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define RESET	"\033[0m"
#define GRAY	"\033[90m"
#define MAGENTA	"\033[35m"
#define YELLOW	"\033[33m"
#define RED		"\033[31m"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
	std::cout << GRAY << "[ DEBUG ]   " 
			  << "I love having extra bacon for my " << 
			  "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
			  << RESET << std::endl;
}

void Harl::info(void) {
	std::cout << MAGENTA << "[ INFO ]    " 
			  << "I cannot believe adding extra bacon costs more money. " << 
			  "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
			  << RESET << std::endl;
}

void Harl::warning(void) {
	std::cout << YELLOW << "[ WARNING ] " 
			  << "I think I deserve to have some extra bacon for free. " <<
			  "I’ve been coming for years whereas you started working here since last month." 
			  << RESET << std::endl;
}

void Harl::error(void) {
	std::cout << RED << "[ ERROR ]   " 
			  << "This is unacceptable! I want to speak to the manager now." 
			  << RESET << std::endl;
}
void	Harl::complain(std::string level) {

	void (Harl::*funcs[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	size_t size = sizeof(levels) / sizeof(levels[0]);
	for (size_t i = 0; i < size; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			break;
		}
	}
}
