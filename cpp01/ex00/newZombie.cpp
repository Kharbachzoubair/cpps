/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 05:26:00 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/08 05:27:26 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newzombie(std::string name)
{
    Zombie* zombieptr=new Zombie(name);
    if(!zombieptr)
        return NULL;
    return zombieptr;
}