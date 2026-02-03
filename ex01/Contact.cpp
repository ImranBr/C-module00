#include "Contact.hpp"

Contact::Contact() {}

void    Contact::setFirstName(const std::string& firstName) 
{
    _firstName = firstName;
}

void    Contact::setLastName(const std::string& lastName) 
{
    _lastName = lastName;
}

void    Contact::setNickname(const std::string& nickname) 
{
    _nickname = nickname;
}

void    Contact::setPhoneNumber(const std::string& phoneNumber) 
{
    _phoneNumber = phoneNumber;
}

void    Contact::setDarkestSecret(const std::string& darkestSecret) 
{
    _darkestSecret = darkestSecret;
}

std::string const & Contact::getFirstName() const 
{
    return _firstName;
}

std::string const & Contact::getLastName() const 
{
    return _lastName;
}

std::string const & Contact::getNickname() const 
{
    return _nickname;
}

std::string const & Contact::getPhoneNumber() const 
{
    return _phoneNumber;
}

std::string const & Contact::getDarkestSecret() const 
{
    return _darkestSecret;
}
