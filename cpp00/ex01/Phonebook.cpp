#include "Phonebook.hpp"

Phonebook::Phonebook()
	: nextContactIndex(0)
{}

std::string	Phonebook::getInput(const std::string &info)
{
	std::string value;

	std::cout << "Insert " << info << ": ";
	std::getline(std::cin, value);
	return value;
}

void	Phonebook::addContact()
{
	std::string firstName = getInput("first name");
	std::string lastName = getInput("last name");
	std::string nickName = getInput("nickname");
	std::string phoneNumber = getInput("phone number");
	std::string darkSecret = getInput("darkest secret");

	contact[nextContactIndex].updateContact(firstName, lastName, nickName, phoneNumber, darkSecret);
	nextContactIndex++;
	if (nextContactIndex == 8)
		nextContactIndex = 0;

}

void	Phonebook::searchContact()
{

}

int	Phonebook::chooseMode(const std::string &mode)
{
	if (mode == "1" || mode == "ADD")
		return (this->addContact(), 1);
	else if (mode == "2" || mode == "SEARCH")
		return (this->searchContact(), 1);
	else if (mode == "3" || mode == "EXIT")
		return (0);
	else
	{
		std::cout << "\nInvalid input!\n" << std::endl;
		return 1;
	}
}
