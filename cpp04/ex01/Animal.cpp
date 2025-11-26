#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor: Default Animal created." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor: " << this->type << " copied." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor: " << this->type << " base destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assignment operator called." << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal: The " << this->type << " makes a generic sound (HMM...)." << std::endl;
}

const std::string& Animal::getType() const {
    return this->type;
}