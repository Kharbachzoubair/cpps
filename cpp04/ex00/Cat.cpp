#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat constructor: MEOW! A Cat appeared." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor: Cat copied." << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor: Shhh, the Cat slipped away." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignment operator called." << std::endl;
    Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat: MEOW! MEOW! I am the " << this->type << "." << std::endl;
}