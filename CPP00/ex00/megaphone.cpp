#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++) {
			for (char *mega = av[i]; *mega; mega++) {
				std::cout << (char)std::toupper(*mega);
			}
		}
	}
	std::cout << std::endl;
}