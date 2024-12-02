
#include "segIsForLosers.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Invalid arguments" << std::endl, 1);
	std::string	suffix = ".replace";
	std::string	str;
	std::ifstream File(av[1]);
	if (!File.is_open())
		return (std::cout << "opening  file error!" << std::endl, 1);
	std::ofstream toFile(av[1] + suffix);
	if (!toFile.is_open())
		return (File.close(), std::cout << "opening  file error!" << std::endl, 1);
	while (std::getline(File, str, '\0'))
	{
		replace(str, av[2], av[3]);
		toFile << str;
	}
	File.close();
	toFile.close();
}
