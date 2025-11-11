/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 05:29:17 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/10 05:02:24 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::humanA(std::string newname, Weapon& newweapon):(name(newname),weapon(newweapon))
void HumanA::attack()
{
    std::cout<<name<<"attack with their"<<weapon.gettype<<"\n";
}