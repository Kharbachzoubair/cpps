/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Weapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 05:25:41 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/10 04:32:20 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string& gettype();
        void settype(std::string newType);
};
#endif