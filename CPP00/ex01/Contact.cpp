#include "Contact.hpp"

void	Contact::SetFirstName(const std::string& _FirstName) {
	first_name = _FirstName;
}

void	Contact::SetLastName(const std::string& _LastName) {
	last_name = _LastName;
}

void	Contact::SetNickname(const std::string& _Nickname) {
	nickname = _Nickname;
}

void	Contact::SetPhoneNumber(const std::string& _PhoneNumber) {
	phone_number = _PhoneNumber;
}

void	Contact::SetDarkestSecret(const std::string& _DarkestSecret) {
	darkest_secret = _DarkestSecret;
}

std::string	Contact::GetFirstName(void) {
	return (first_name);
}

std::string	Contact::GetLastName(void) {
	return (last_name);
}

std::string	Contact::GetNickname(void) {
	return (nickname);
}

std::string	Contact::GetPhoneNumber(void) {
	return (phone_number);
}

std::string	Contact::GetDarkestSecret(void) {
	return (darkest_secret);
}
