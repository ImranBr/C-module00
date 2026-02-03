#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
    
    public:
        Contact();

        void    setFirstName(const std::string& firstName);
        void    setLastName(const std::string& lastName);
        void    setNickname(const std::string& nickname);
        void    setPhoneNumber(const std::string& phoneNumber);
        void    setDarkestSecret(const std::string& darkestSecret);

        std::string const & getFirstName() const;
        std::string const & getLastName() const;
        std::string const & getNickname() const;
        std::string const & getPhoneNumber() const;
        std::string const & getDarkestSecret() const;
};

#endif