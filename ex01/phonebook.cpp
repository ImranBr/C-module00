/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ibarbouc <ibarbouc@student.42.fr>          #+#  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2026-01-31 19:43:22 by ibarbouc          #+#    #+#             */
/*   Updated: 2026-01-31 19:43:22 by ibarbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Phonebook::Phonebook() : _count(0), _nextIndex(0)
{
}

void Phonebook::add()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);
	while (firstName.empty())
	{
		std::cout << "Error! The first name must not be empty." << std::endl;
		std::cout << "Enter First Name: ";
		std::getline(std::cin, firstName);
	}
    while (!firstName.isprint())
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);
	while (lastName.empty())
	{
		std::cout << "Error! The last name must not be empty." << std::endl;
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, lastName);
	}
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nickname);
	while (nickname.empty())
	{
		std::cout << "Error! The nickname must not be empty." << std::endl;
		std::cout << "Enter Nickname ";
		std::getline(std::cin, nickname);
	}
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);
	while (phoneNumber.empty())
	{
		std::cout << "Error! The phone number must not be empty." << std::endl;
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, phoneNumber);

		for (int i = 0; i < (int)phoneNumber.length(); i++)
		{
			if (!isdigit(phoneNumber[i]))
			{
				std::cout << "Error! The phone number must contain only digits." << std::endl;
				std::cout << "Enter Phone Number: ";
				std::getline(std::cin, phoneNumber);
				i = -1;
			}
		}
	}
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	while (darkestSecret.empty())
	{
		std::cout << "Error! The darkest secret must not be empty." << std::endl;
		std::cout << "Enter Darkest Secret: ";
		std::getline(std::cin, darkestSecret);
	}
	_contacts[_nextIndex].setFirstName(firstName);
	_contacts[_nextIndex].setLastName(lastName);
	_contacts[_nextIndex].setNickname(nickname);
	_contacts[_nextIndex].setPhoneNumber(phoneNumber);
	_contacts[_nextIndex].setDarkestSecret(darkestSecret);

	if (_count < 8)
		_count++;

	std::cout << "Contact added! There are now " << _count << " contacts in the phonebook." << std::endl;
}

void Phonebook::search() const
{

}
