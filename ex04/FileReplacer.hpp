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
	bool		checkInputs() const;
	
};

#endif
