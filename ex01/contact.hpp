#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone_num;
    std::string darckest_secret;

public:
    void setfirstname(std::string name);
    void setlastname(std::string name);
    void setnickname(std::string name);
    void setphone_num(std::string phone);
    void setdarckestsecret(std::string secret);

    std::string getfirstname();
    std::string getlastname();
    std::string getnickname();
    std::string getphone_num();
    std::string getdarckestsecret();

    void display();
};

#endif
