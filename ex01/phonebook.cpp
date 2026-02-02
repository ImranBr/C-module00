/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarbouc <ibarbouc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-02 21:00:59 by ibarbouc          #+#    #+#             */
/*   Updated: 2026-02-02 21:00:59 by ibarbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

bool	isPrintableString(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isprint(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

Phonebook::Phonebook() : _count(0), _nextIndex(0)
{
}

void Phonebook::add()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);
	while (firstName.empty() || !isPrintableString(firstName))
	{
		std::cout << "Error! The first name must not be empty and must contain only printable characters." << std::endl;
		std::cout << "Enter First Name: ";
		std::getline(std::cin, firstName);
	}
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);
	while (lastName.empty() || !isPrintableString(lastName))
	{
		std::cout << "Error! The last name must not be empty and must contain only printable characters." << std::endl;
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, lastName);
	}
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nickname);
	while (nickname.empty() || !isPrintableString(nickname))
	{
		std::cout << "Error! The nickname must not be empty and must contain only printable characters." << std::endl;
		std::cout << "Enter Nickname: ";
		std::getline(std::cin, nickname);
	}
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);
	while (phoneNumber.empty() || !isPrintableString(phoneNumber))
	{
		std::cout << "Error! The phone number must not be empty and must contain only printable characters." << std::endl;
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, phoneNumber);
	}
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
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	while (darkestSecret.empty() || !isPrintableString(darkestSecret))
	{
		std::cout << "Error! The darkest secret must not be empty and must contain only printable characters." << std::endl;
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

	_nextIndex = (_nextIndex + 1) % 8;

	std::cout << "Contact added! There are now " << _count << " contacts in the phonebook." << std::endl;
}

void Phonebook::search() const
{
	if (_count == 0)
	{
		std::cout << "The phonebook is empty. Please add contacts first." << std::endl;
		return;
	}
	std::cout << "|" << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < _count; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << (i + 1) << "|";
		std::string firstName = _contacts[i].getFirstName();
		std::string lastName = _contacts[i].getLastName();
		std::string nickname = _contacts[i].getNickname();
		std::string darkestSecret = _contacts[i].getDarkestSecret();

		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";
		if (nickname.length() > 10)
			nickname = nickname.substr(0, 9) + ".";
		if (darkestSecret.length() > 10)
			darkestSecret = darkestSecret.substr(0, 9) + ".";
		
		std::cout << std::setw(10) << firstName << "|";
		std::cout << std::setw(10) << lastName << "|";
		std::cout << std::setw(10) << nickname << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Enter the index of the contact to view details: ";
	std::string input;
	std::getline(std::cin, input);
	
	if (input.empty())
		return;

	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cout << "Error: Invalid index!" << std::endl;
		return;
	}
	
	int index = input[0] - '0';
	
	if (index < 1 || index > _count)
	{
		std::cout << "Error: Index out of range!" << std::endl;
		return;
	}

	std::cout << std::endl;
	std::cout << "First Name: " << _contacts[index - 1].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[index - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index - 1].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index - 1].getDarkestSecret() << std::endl;
}