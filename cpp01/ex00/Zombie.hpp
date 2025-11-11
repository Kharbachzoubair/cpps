/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 05:03:27 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/08 05:26:18 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE__HPP
#define Zombie__HPP

#include <iostream>
#include <string>
class Zombie
{
    private:
        std::string name;
    public:
        
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        
        
    };
    Zombie *newzombie(std::string name);
    void randomChump(std::string name);
#endif