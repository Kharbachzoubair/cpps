/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 04:23:31 by marvin            #+#    #+#             */
/*   Updated: 2025/11/12 04:23:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:
    // دوال الأعضاء الخاصة (The Complaints)
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    // الدالة العامة المسؤولة عن توجيه الاستدعاء
    void complain(std::string level);
};

#endif