#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
    this->type = "Cat";
    std::cout << "Cat constructor: MEOW! A Cat and its Brain appeared." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor: Performing deep copy of Brain." << std::endl;
    this->brain = new Brain(*(other.brain)); 
}

Cat::~Cat() {
    delete this->brain; 
    std::cout << "Cat destructor: Shhh, the Cat and its Brain slipped away." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignment operator: Deep copy assignment." << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        
        delete this->brain; 
        
        this->brain = new Brain(*(other.brain)); 
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat: MEOW! MEOW! I am the " << this->type << "." << std::endl;
}

const std::string& Cat::getType() const {
    return this->type;
}

Brain* Cat::getBrain() const {
    return this->brain;
}