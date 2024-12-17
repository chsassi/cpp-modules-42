#include "Phonebook.hpp"
#include "Contact.hpp"

std::string	normalise(std::string attribute)
{
	int len = attribute.size();

	if (len > MAX_SIZE)
	{
		std::string newString = attribute.substr(0, MAX_SIZE - 1);
		newString += ".";
		return (newString);
	}
	else
		return (attribute);
}
