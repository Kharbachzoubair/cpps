/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 05:29:53 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/11 16:07:39 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->weapon = &newWeapon; 
}

void HumanB::attack()
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their " 
                  << this->weapon->getType() << "\n";
    }
    else
    {
        std::cout << this->name << " attacks with bare hands\n";
    }
}