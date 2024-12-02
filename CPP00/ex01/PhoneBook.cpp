#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0), _old_contact(0) { }

void	PhoneBook::addContact(const Contact& NewContact)
{
	if (_count < 8) {
		_contact[_count] = NewContact;
		_count++;
	}
	else {
		_contact[_old_contact] = NewContact;
		_old_contact = (_old_contact + 1) % 8;
	}
}

std::string	PhoneBook::checkLength(const std::string& str)
{
	std::string s = str;
	if (str.size() > 10)
	{
		s = str.substr(0, 10);
		s[9] = '.'; 
	}
	return (s);
}

void	PhoneBook::searchContact(void)
{
	std::string	contact_index;
	int	index;
	if (_count > 0)
	{
		std::cout << "Index\t| Fist name | Last name | Nickname" << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		for (int i = 0; i < _count; i++) {
			std::cout << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << checkLength(_contact[i].GetFirstName()) << "|";
			std::cout << std::setw(10) << checkLength(_contact[i].GetLastName()) << "|";
			std::cout << std::setw(10) << checkLength(_contact[i].GetNickname()) << std::endl;
		}
		std::cout <<  "Which contact you Want ??\nEnter index : ";
		contact_index = getlineCheck();
		while (!notValidNum(contact_index))
		{
			std::cout << "\x1b[31mEnter a valid index between 1 and 8 : \x1b[0m";
			contact_index = getlineCheck();
		}
		std::istringstream iss(contact_index);
        if (!(iss >> index) || index <= 0 || index > _count)
		{
			printf("%d\n", index);
            std::cout << "Invalid index!!" << std::endl;
            return;
        }
		Contact& selectedContact = _contact[index - 1];
		std::cout << std::left;
		std::cout << std::setw(18) << "First name" << ": " << selectedContact.GetFirstName() << std::endl;
		std::cout << std::setw(18) << "Last name" << ": " << selectedContact.GetLastName() << std::endl;
		std::cout << std::setw(18) << "Nickname" << ": " << selectedContact.GetNickname() << std::endl;
		std::cout << std::setw(18) << "Phone number" << ": " << selectedContact.GetPhoneNumber() << std::endl;
		std::cout << std::setw(18) << "Darkest secret" << ": " << selectedContact.GetDarkestSecret() << std::endl;
	}
	else
        std::cout << "No contacts available to display." << std::endl;
}

int	PhoneBook::notValidNum(std::string content)
{
	for (int i = 0; i < content.size(); i++) {
		if (!std::isdigit(content[i]))
			return (0);
	}
	if (content == "")
		return (0);
	return (1);
}

int	PhoneBook::isValid(std::string content)
{
	int i = 0;
	for (; i < content.size(); i++) {
		if (!std::isprint(content[i]))
			return (0);
	}
	if (content == "")
		return (0);
	for (i = 0; i < content.size(); i++) {
		if (content[i] != ' ')
			break;
	}
	if (i == content.size())
		return (0);
	return (1);
}

std::string	PhoneBook::getlineCheck(void)
{
	std::string	content;
	if (!std::getline(std::cin, content))
	{
		if (std::cin.eof())
		{
			std::cout << "\x1b[31m\nInput terminated. Program is exited.\n\x1b[0m";
			exit(1);
		}
	}
	return (content);
}
std::string	PhoneBook::loopCheck(std::string content, std::string prompt)
{
	while (!isValid(content))
	{
		std::cout << "\x1b[31m" << prompt << " : \x1b[0m";
		content = getlineCheck();
	}
	return (content);
}


void	PhoneBook::add(std::string content, Contact& NewContact)
{
	// First name
	std::cout << "First name : ";
	content = getlineCheck();
	if (!isValid(content))
		content = loopCheck(content, "First name");
	NewContact.SetFirstName(content);
	// Last name
	std::cout << "Last name : ";
	content = getlineCheck();
	if (!isValid(content))
		content = loopCheck(content, "Last name");
	NewContact.SetLastName(content);
	// Nickname
	std::cout << "Nickname : ";
	content = getlineCheck();
	if (!isValid(content))
		content = loopCheck(content, "Nickname");
	NewContact.SetNickname(content);
	//Phone number
	std::cout << "Phone number : ";
	content = getlineCheck();
	while (!notValidNum(content))
	{
		std::cout << "\x1b[31mPhone number : \x1b[0m";
		content = getlineCheck();
	}
	NewContact.SetPhoneNumber(content);
	// Darkest secret
	std::cout << "Darkest secret : ";
	content = getlineCheck();
	if (!isValid(content))
		content = loopCheck(content, "Darkest secret");
	NewContact.SetDarkestSecret(content);
}