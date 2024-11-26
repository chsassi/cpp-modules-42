#include "Contact.hpp"

Contact::Contact()
	: firstName("Empty"),
		lastName("Empty"),
		nickName("Empty"),
		phoneNumber("Empty"),
		darkSecret("Empty")
{}

void	Contact::updateContact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkSecret = darkSecret;
}
