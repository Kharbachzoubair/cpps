#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main() {

    std::srand(std::time(0));

    std::cout << "--- Test 1 ---" << std::endl;
    Base* ptr = generate();
    
    std::cout << "Identify by Pointer: ";
    identify(ptr);
    
    std::cout << "Identify by Reference: ";
    identify(*ptr);

    delete ptr;

    std::cout << "\n--- Test 2 ---" << std::endl;
    Base* ptr2 = generate();
    std::cout << "Identify by Pointer: ";
    identify(ptr2);
    std::cout << "Identify by Reference: ";
    identify(*ptr2);
    delete ptr2;

    return 0;
}