/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:30:49 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/02 05:49:43 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static std::string formatField(const std::string &s)
{
    std::string res = s;
    if (res.length() > 10)
        res = res.substr(0, 9) + ".";
    else
    {
        while (res.length() < 10)
            res += " ";
    }
    return res;
}

void Phonebook::add()
{
    Contact newcontact;
    std::string input;

    std::cout << "Enter your firstname: ";
    std::getline(std::cin, input);
    newcontact.setfirstname(input);

    std::cout << "Enter your lastname: ";
    std::getline(std::cin, input);
    newcontact.setlastname(input);

    std::cout << "Enter your nickname: ";
    std::getline(std::cin, input);
    newcontact.setnickname(input);

    std::cout << "Enter your phone: ";
    std::getline(std::cin, input);
    newcontact.setphone_num(input);

    std::cout << "Enter your secret: ";
    std::getline(std::cin, input);
    newcontact.setdarckestsecret(input);

    if (newcontact.getfirstname().empty()
        || newcontact.getlastname().empty()
        || newcontact.getnickname().empty()
        || newcontact.getphone_num().empty()
        || newcontact.getdarckestsecret().empty())
    {
        std::cout << "Contact not added. All fields must be filled.\n";
        return;
    }

    contacts[index] = newcontact;
    index = (index + 1) % 8;
    if (count < 8)
        count++;

    std::cout << "The contact has been added successfully!\n";
}

void Phonebook::search()
{
    if (count == 0)
    {
        std::cout << "No contact saved.\n";
        return;
    }

    std::cout << "------------------------------------------------------\n";
    std::cout << formatField("Index") << "|"
              << formatField("Firstname") << "|"
              << formatField("Lastname") << "|"
              << formatField("Nickname") << "\n";
    std::cout << "------------------------------------------------------\n";

    for (int i = 0; i < count; i++)
    {
        // Convert number to string manually
        char idx_char[2];
        idx_char[0] = '0' + i;
        idx_char[1] = '\0';
        std::string idx_str = idx_char;

        std::cout << formatField(idx_str) << "|"
                  << formatField(contacts[i].getfirstname()) << "|"
                  << formatField(contacts[i].getlastname()) << "|"
                  << formatField(contacts[i].getnickname()) << "\n";
    }

    std::string input;
    std::cout << "Enter the index: ";
    std::getline(std::cin, input);

    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index.\n";
        return;
    }

    int idx = input[0] - '0';
    if (idx >= count)
    {
        std::cout << "You are out of range.\n";
        return;
    }

    std::cout << "\n--- Contact Details ---\n";
    std::cout << "First Name: " << contacts[idx].getfirstname() << "\n";
    std::cout << "Last Name: " << contacts[idx].getlastname() << "\n";
    std::cout << "Nickname: " << contacts[idx].getnickname() << "\n";
    std::cout << "Phone Number: " << contacts[idx].getphone_num() << "\n";
    std::cout << "Darkest Secret: " << contacts[idx].getdarckestsecret() << "\n";
}
