#pragma once

#include "Weapon.hpp"

class HumanA 
{
	private:
		Weapon&		_Weapon;
		std::string	_name;
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);
};