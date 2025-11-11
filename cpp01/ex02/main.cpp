/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 04:59:38 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/09 05:08:03 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main()
{
    std::string str= "HI THIS IS BRAIN";
    std::string *stringPTR=&str;
    std::string &stringREF=str;

    std::cout << "--- Memory Addresses ---" << "\n";
    std::cout << "The memory address of the string variable: " << &str << "\n";
    std::cout << "The memory address held by stringPTR: " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF: " << &stringREF << "\n";
    
    std::cout << "\n--- Values ---" << "\n";
    std::cout << "The value of the string variable: " << str << "\n";
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF: " << stringREF << "\n";

    return 0;
}
