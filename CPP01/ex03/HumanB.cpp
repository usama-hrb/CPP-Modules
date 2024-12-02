
#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon* weapon)
{
	_Weapon = weapon;
	_name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	_Weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
}