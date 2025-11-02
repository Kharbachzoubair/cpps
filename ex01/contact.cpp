#include "contact.hpp"

void Contact::setfirstname(std::string name)
{
    firstname = name;
}

void Contact::setlastname(std::string name)
{
    lastname = name;
}

void Contact::setnickname(std::string name)
{
    nickname = name;
}

void Contact::setphone_num(std::string phone)
{
    phone_num = phone;
}

void Contact::setdarckestsecret(std::string secret)
{
    darckest_secret = secret;
}

std::string Contact::getfirstname()
{
    return firstname;
}

std::string Contact::getlastname()
{
    return lastname;
}

std::string Contact::getnickname()
{
    return nickname;
}

std::string Contact::getphone_num()
{
    return phone_num;
}

std::string Contact::getdarckestsecret()
{
    return darckest_secret;
}

void Contact::display()
{
    std::cout << "First Name: " << firstname << "\n";
    std::cout << "Last Name: " << lastname << "\n";
    std::cout << "Nickname: " << nickname << "\n";
    std::cout << "Phone Number: " << phone_num << "\n";
    std::cout << "Darkest Secret: " << darckest_secret << "\n";
}
