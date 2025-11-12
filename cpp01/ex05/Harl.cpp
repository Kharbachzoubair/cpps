/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 04:23:43 by marvin            #+#    #+#             */
/*   Updated: 2025/11/12 04:23:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// 1. دالة DEBUG
void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

// 2. دالة INFO
void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

// 3. دالة WARNING
void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

// 4. دالة ERROR
void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level) {
    // مصفوفة أسماء المستويات (للبحث)
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    // مصفوفة مؤشرات دوال الأعضاء (PMFs). 
    // التوقيع: void (Harl::*)(void)
    void (Harl::*f[])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning, 
        &Harl::error
    };

    // حلقة تكرارية للبحث عن المستوى المطابق
    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            // تنفيذ الدالة باستخدام مؤشر دالة العضو (PMF)
            // الصيغة: (this->*f[i])()
            (this->*f[i])(); 
            return; // إنهاء الدالة بعد العثور على التطابق
        }
    }

    // رسالة للمستويات غير الصالحة
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}