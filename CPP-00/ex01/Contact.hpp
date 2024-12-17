#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;

	public:
		Contact();
		bool		isEmpty();
		void		displayContact();
		void		setContact(const std::string &firstName, const std::string &lastName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkSecret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkSecret();
};

#endif