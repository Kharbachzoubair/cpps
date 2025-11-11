/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* Weapon.cpp                                        :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2025/11/09 05:25:33 by zkharbac          #+#    #+#             */
/* Updated: 2025/11/10 04:33:22 by zkharbac         ###   ########.fr       */
/* */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string initial_type) : type(initial_type) {}

const std::string& Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}