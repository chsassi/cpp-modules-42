#include "Phonebook.hpp"

std::string renderWhitespaces(int diff, char delim);
std::string normalise(std::string attribute);

Phonebook::Phonebook()
	: ContactIndex(0)
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

	contact[ContactIndex].updateContact(firstName, lastName, nickName, phoneNumber, darkSecret);
	ContactIndex++;
	if (ContactIndex == 8)
		ContactIndex = 0;
}

void	Phonebook::showPhonebook()
{
	std::cout << "------------------------------------------------------";
	std::cout << "\n|    ID    |  First Name  |  Last Name  |  Nickname  |\n";
	std::cout << "------------------------------------------------------\n";
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].isEmpty())
		{
					std::cout << "|     " << i << "     |"
					  << normalise(contact[i].getFirstName()) << "    |"
					  << normalise(contact[i].getLastName()) << "   |"
					  << normalise(contact[i].getNickName()) << " |\n";
		}
		else
			std::cout << "|     " << i << "    |                                         |\n";
	}
	std::cout << "------------------------------------------------------\n";
}

void	Phonebook::searchContact()
{
	Contact	contact;
	std::string read;
	int i = 0;

	showPhonebook(); //display all contacts
	do
	{
		std::getline(std::cin, read);
		
		if (std::cin.fail() || read == "EXIT")
			break ;
	} while (i != 0);
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
