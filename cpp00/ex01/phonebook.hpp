#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>

class Contact
{
    std::string FirstName;
    std::string SecondName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkSecret;
};

class PhoneBook
{
    Contact contact[8];
};

#endif