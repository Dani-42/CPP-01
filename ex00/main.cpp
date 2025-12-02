#include "Zombie.hpp"

int	main(){
	
	Zombie	*Zombie_1;
	
	Zombie_1 = newZombie("Dynamic Zombie");
	randomChump("Random Chump");
	delete Zombie_1;
	return (0);
}
