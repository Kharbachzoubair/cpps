#include "Serializer.hpp"
#include <iostream>

int main() {
    Data myData;
    myData.id = 42;
    myData.name = "Gemini";

    std::cout << "Data Address (Original): " << &myData << std::endl;


    uintptr_t raw = Serializer::serialize(&myData);
    std::cout << "Serialized (uintptr_t):  " << raw << std::endl;


    Data* ptr = Serializer::deserialize(raw);
    std::cout << "Deserialized Address:   " << ptr << std::endl;

    if (ptr == &myData) {
        std::cout << "SUCCESS: Pointers are identical!" << std::endl;
        std::cout << "Data check -> ID: " << ptr->id << ", Name: " << ptr->name << std::endl;
    } else {
        std::cout << "ERROR: Pointers do not match!" << std::endl;
    }

    return 0;
}