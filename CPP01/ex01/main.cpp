
#include "Zombie.hpp"

int main()
{
	Zombie	*z1 = zombieHorde(5, "Foo");
	
	if (z1)
		for (int i = 0; i < 5; i++)
			z1[i].announce();
	delete[] z1;
}