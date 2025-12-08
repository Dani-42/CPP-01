/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:25:46 by datienza          #+#    #+#             */
/*   Updated: 2025/12/08 18:26:03 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string& filename, 
	const std::string& s1, 
	const std::string& s2) : _filename(filename), _s1(s1), _s2(s2){
}
FileReplacer::~FileReplacer(){

}
void	FileReplacer::replaceLine(std::string& str)
{
	size_t pos = 0;
	
	while (1)
	{
		pos = str.find(this->_s1, pos);
		if (pos == std::string::npos)
			break ;
		str.erase(pos, this->_s1.length());
		str.insert(pos, this->_s2);
		pos += this->_s2.length();
	}
}

bool    FileReplacer::execute(){
	if (this->_s1.empty()) 
	{
		std::cerr << "Error: Search string cannot be empty." << std::endl;
		return false;
	}
	std::ifstream infile(this->_filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: could not open input file: " << this->_filename << std::endl;
		return false;
	}
	std::string outFilename = _filename + ".replace";
	std::ofstream outfile(outFilename.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Could not create output file: " << outFilename << std::endl;
		return false;
	}
	std::string line;
	while (std::getline(infile, line)) 
	{
		replaceLine(line);
		outfile << line << std::endl;
	}
	return true;
}
