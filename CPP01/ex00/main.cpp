

#include "Zombie.hpp"

int main()
{
	Zombie	z("Hello");
	Zombie	*z1;
	randomChump("First");
	z1 = newZombie("Second");
	z1->announce();
	z.announce();
	delete (z1);
}