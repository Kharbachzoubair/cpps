/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 05:28:47 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/08 05:43:47 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("STACKEY ");
    Zombie *zombieptr=newzombie("HEAPPY ");
    zombieptr->announce();
    delete(zombieptr);
}