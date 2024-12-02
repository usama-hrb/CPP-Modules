
#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Yooo Harl is a Human!!" << std::endl, 1);
	Harl test;
	test.comlain(av[1]);
}