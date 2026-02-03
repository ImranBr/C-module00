/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibarbouc <ibarbouc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-31 19:43:45 by ibarbouc          #+#    #+#             */
/*   Updated: 2026-01-31 19:43:45 by ibarbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

int	main()
{
    Phonebook	phonebook;
    std::string	input;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, input))
            break ;
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
        {
            std::cout << "Exiting the program." << std::endl;
            break ;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return (0);
}
