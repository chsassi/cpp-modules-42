#include "Contact.hpp"

Contact::Contact()
	: firstName(""),
		lastName(""),
		nickName(""),
		phoneNumber(""),
		darkSecret("")
{}

bool	Contact::isEmpty()
{
	if (firstName.empty() && lastName.empty() && nickName.empty() && phoneNumber.empty() && darkSecret.empty())
		return (1);
	return (0);
}

void	Contact::displayContact()
{
	std::cout << "First Name: " << this->firstName << "\n"
			  << "Last Name: " << this->lastName << "\n"
			  << "Nickname: " << this->nickName << "\n"
			  << "Phone Number: " << this->phoneNumber << "\n"
			  << "Darkest Secret: " << this->darkSecret << "\n";
}

void	Contact::setContact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkSecret = darkSecret;
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkSecret()
{
	return (this->darkSecret);
}
