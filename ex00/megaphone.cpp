/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:28:03 by zkharbac          #+#    #+#             */
/*   Updated: 2025/10/30 12:43:29 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <iostream>

int main (int ac, char **av)
{
    if(ac<2)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for(int i=1;av[i];i++)
    {
       for(int j=0;av[i][j];j++)
       {
        if(av[i][j] >='a' && av[i][j]<='z')
        {
            av[i][j]=std::toupper(av[i][j]);
        }
        std::cout<<av[i][j];
       }
    }
    std::cout<<std::endl;
}