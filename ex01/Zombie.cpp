#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie(void){
		std::cout << "Destroy Zombie object " << _name << std::endl;
}
void	Zombie::announce() const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string n) {
	this->_name = n;
}