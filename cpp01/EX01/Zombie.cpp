/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 03:40:15 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/09 04:58:08 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string name ):name(name)
{
    std::cout<<name<<"has been created\n";
}
Zombie::~Zombie(void) 
{
    std::cout << name << " has been destroyed\n"; 
}
Zombie::Zombie()
{
}
void Zombie::setzombie(std::string inputname)
{
    name=inputname;   
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..\n"; 
}
 