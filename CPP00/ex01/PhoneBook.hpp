#pragma once

#include <sstream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private:
	//Attributes
		Contact _contact[8];
		int		_count;
		int		_old_contact;
	public:
		PhoneBook();
		void		addContact(const Contact&);
		void		searchContact();
		void		add(std::string, Contact&);
		void		beginnig(void);
		int			notValidNum(std::string);
		int			isValid(std::string);
		std::string	checkLength(const std::string&);
		std::string	getlineCheck(void);
		std::string	loopCheck(std::string, std::string);
};
