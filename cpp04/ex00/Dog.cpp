#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog constructor: WOOF! A Dog arrived." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor: Dog copied." << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor: Bye, the Dog ran away." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator called." << std::endl;
    Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog: WOOF! WOOF! I am the " << this->type << "." << std::endl;
}