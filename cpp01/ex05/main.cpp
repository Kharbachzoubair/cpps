/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 04:24:56 by marvin            #+#    #+#             */
/*   Updated: 2025/11/12 04:24:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "--- Test 1: DEBUG Complaint ---" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "--- Test 2: INFO Complaint ---" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "--- Test 3: WARNING Complaint ---" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "--- Test 4: ERROR Complaint ---" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "--- Test 5: Invalid Level ---" << std::endl;
    harl.complain("INVALID");
    std::cout << std::endl;

    std::cout << "--- Test 6: Mixed Case Level ---" << std::endl;
    harl.complain("debug"); // هذا لا يطابق "DEBUG" وسيطبع رسالة الخطأ
    
    return 0;
}