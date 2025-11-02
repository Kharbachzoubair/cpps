/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:44:52 by zkharbac          #+#    #+#             */
/*   Updated: 2025/11/02 05:09:49 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "contact.hpp"

class Phonebook
{
private:
    Contact contacts[8]; 
    int count;
    int index;

public:
    Phonebook() {
        index = 0;
        count = 0;
    }
    ~Phonebook(){};
    void add();
    void search();
};

#endif
