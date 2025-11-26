#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called (Non-virtual)." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal: Generic WRONG sound (Static HMM...)." << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return this->type;
}