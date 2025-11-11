/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 05:16:30 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/08 05:42:44 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):name(name){};
Zombie::~Zombie()
{
    std::cout<<name<<"the name has been destroyed"<<"\n";
}
void Zombie:: announce()
{
    std::cout<<name<<":BraiiiiiiinnnzzzZ.."<<"\n";
}