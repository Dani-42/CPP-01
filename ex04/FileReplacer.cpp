#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string& filename, 
    const std::string& s1, 
    const std::string& s2) : _filename(filename), _s1(s1), _s2(s2){
}
FileReplacer::~FileReplacer(){

}

bool		FileReplacer::checkInputs() const {
    std::ifstream infile(this->_filename);
    if (!infile.is_open())
    {
        std::cerr << "Error: file open" << std::endl;
        return false;
    }
    if (this->_s1.empty()) {
        std::cerr << "Error: Search string cannot be empty." << std::endl;
        return false;
    }
    
    return true;
}



bool    FileReplacer::execute(){
    
    if(!checkInputs())
        return false;
    return true;
}