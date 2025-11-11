/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 05:29:53 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/11 04:39:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

void HumanB::HumanB(std::string newname,Weapon):name(newname),Weapon(Null);
void HumanB::setWeapon(Weapon& newWeapon)
{
    Weapon=&newWeapon;
}
void HumanB::attack()
{
    if(Weapon)
        std::cout<<name<<"attack with this type"<<Weapon.settype();
    else
        std::cout<<name<<"attack with bare hands\n";
}