/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:26:09 by datienza          #+#    #+#             */
/*   Updated: 2025/12/08 18:26:21 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <string>
#include <fstream>

class	FileReplacer{
public:
	FileReplacer(const std::string& filename, 
			const std::string& s1, 
			const std::string& s2);
	~FileReplacer();
	bool execute();

private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
	void		replaceLine(std::string& str);
};

#endif
