#pragma once

#include "iostream"

class Contact {
	private:
		//Attributes
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		//Setters
		void	SetFirstName(const std::string&);
		void	SetLastName(const std::string&);
		void	SetNickname(const std::string&);
		void	SetPhoneNumber(const std::string&);
		void	SetDarkestSecret(const std::string&);

		//Getters
		std::string	GetFirstName(void);
		std::string	GetLastName(void);
		std::string	GetNickname(void);
		std::string	GetPhoneNumber(void);
		std::string	GetDarkestSecret(void);
};