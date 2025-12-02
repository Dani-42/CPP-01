#include "Zombie.hpp"

int	main(){
	Zombie	*zh;
	int	numZh;

	numZh = 6;
	zh = zombieHorde(numZh, "Horde");
	for (int i = 0; i < numZh; i++)
	{
		std::cout << "Index: " << i << " ";
		zh[i].announce();
	}
	delete[] zh;
	return (0);
}
