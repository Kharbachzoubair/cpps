/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 05:03:27 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/12 18:04:42 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE__HPP
#define ZOMBIE__HPP

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