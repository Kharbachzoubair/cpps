/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:37:45 by zkharbac          #+#    #+#             */
/*   Updated: 2025/10/30 22:29:58 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"
int main ()
{
    Phonebook phonbook;
    std::string input;
   while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, input);

        if (input == "ADD")
            phonbook.add();
        else if (input == "SEARCH")
            phonbook.search();
        else if (input == "EXIT")
            break;
        else
            std::cout << "Invalid command. Try again.\n";
    }
}