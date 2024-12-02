
#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << _name << ": Destructor is called." << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}