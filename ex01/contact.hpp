/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-30 10:50:40 by user              #+#    #+#             */
/*   Updated: 2026-01-30 10:50:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
    
    public:
        Contact();

        void    setFirstName(const std::string& firstname);
        void    setLastName(const std::string& lastname);
        void    setNickName(const std::string& nickname);
        void    setPhoneNumber(const std::string& phonenumber);
        void    setDarkestSecret(const std::string& darkestsecret);

        std::string getFirstName
}