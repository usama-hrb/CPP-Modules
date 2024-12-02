#pragma once

#include "Weapon.hpp"

class HumanB 
{
	private:
		Weapon*		_Weapon;
		std::string	_name;
	public:
		HumanB(std::string name, Weapon* weapon);
		void	attack(void);
		void	setWeapon(Weapon weapon);
};