#include "Zombie.hpp"

	Zombie::Zombie(std::string name) : _name(name) {
		std::cout << "Create Zombie object " << _name << std::endl;
}
	Zombie::~Zombie(void){
		std::cout << "Destroy Zombie object " << _name << std::endl;
}
void Zombie::announce() const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...." << std::endl;
}

