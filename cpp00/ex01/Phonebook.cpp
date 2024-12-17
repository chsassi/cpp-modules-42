#include "Phonebook.hpp"

std::string renderWhitespaces(int diff, char delim);
std::string normalise(std::string attribute);

Phonebook::Phonebook()
	: ContactIndex(0)
{}

std::string	Phonebook::getInput(const std::string &info)
{
	std::string value;

	do
	{
		std::cout << "Insert " << info << ": ";
		std::getline(std::cin, value);
		bool isWhitespace = true;
		for (std::size_t i = 0; i < value.size(); i++)
		{
			if (!isspace(value[i]))
			{
				isWhitespace = false;
				break ;
			}
		}
		if (isWhitespace)
			value = "";
	} while (value.empty());
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
	std::string line(45, '-');
	std::cout << line << std::endl;
	std::cout << "|" << std::setw(MAX_SIZE) << std::right << "ID";
	std::cout << "|" << std::setw(MAX_SIZE) << std::right << "First Name";
	std::cout << "|" << std::setw(MAX_SIZE) << std::right << "Last Name";
	std::cout << "|" << std::setw(MAX_SIZE) << std::right << "Nickname";
	std::cout << "|" << std::endl;
	std::cout << line << std::endl;
	for (int i = 0; i < 8; i++)
	{
			std::cout << "|" << std::setw(MAX_SIZE) << std::right << i;
			std::cout << "|" << std::setw(MAX_SIZE) << std::right  << normalise(contact[i].getFirstName());
			std::cout << "|" << std::setw(MAX_SIZE) << std::right << normalise(contact[i].getLastName());
			std::cout << "|" << std::setw(MAX_SIZE) << std::right << normalise(contact[i].getNickName());
			std::cout << "|" << std::endl;
    }
	std::cout << line << std::endl;
}

void	Phonebook::searchContact()
{
	Contact	contact;
	std::string read;
	int i = 0;

	showPhonebook();
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
