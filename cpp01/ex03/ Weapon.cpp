/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Weapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 05:25:33 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/10 04:33:22 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype):type(newtype){}
Const std::string& Weapon::gettype()
{
    return type;
}
Weapon::settype(std::string newType)
{
    type=newType;
}
