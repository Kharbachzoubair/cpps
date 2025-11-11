/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 05:24:47 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/11 05:44:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Weapon.hpp>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club); 
        
        bob.attack(); 
        
        club.setType("some other type of club");
        
        bob.attack(); 
    }

    std::cout << "\n----------------------------------------\n" << std::endl;

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        
        jim.setWeapon(club); 
        
        jim.attack();
        
        club.setType("some other type of club");
        
        jim.attack();
    }

    return 0;
}