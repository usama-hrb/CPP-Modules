
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."  << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::comlain(std::string level)
{
	int	pos = 2147483647;
	void (Harl::*arr[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (str[i] == level)
		{
			pos = i;
			break;
		}
	switch (pos) {
		case 0:
			(this->*arr[0])();
			break;
		case 1:
			(this->*arr[1])();
			break;
		case 2:
			(this->*arr[2])();
			break;
		case 3:
			(this->*arr[3])();
			break;
		default:
			std::cout << "That's can brak Harl!, be careful ;)" << std::endl;
			break;
	}
}