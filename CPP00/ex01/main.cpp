#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

void	beginnig(void)
{
	std::cout << "\x1b[32m\tWelcome to My Awesome PhoneBook\t\x1b[0m" << std::endl;
	std::cout << "ADD : to add a new contact.\n";
	std::cout << "SEARCH : to show all your contacts and search on a spesific one.\n";
	std::cout <<"EXIT : to exit the program.\n\n";
}

int	main(void) {
	PhoneBook PhoneBook;
	Contact	NewContact;
	std::string command;
	std::string	content;

	beginnig();
	while (1) {
		std::cout << "Enter a Command : ";
		command = PhoneBook.getlineCheck();
		if (command == "ADD") {
			PhoneBook.add(content, NewContact);
			PhoneBook.addContact(NewContact);
		}
		else if (command == "SEARCH") {
			PhoneBook.searchContact();
		}
		else if (command == "EXIT") {
			std::cout << "\x1b[32mGood bye :)\x1b[0m" << std::endl;
			break;
		}
		else
			std::cout << "\x1b[31mInvalid command!\x1b[0m" << std::endl;
	}
	return (0);
}
