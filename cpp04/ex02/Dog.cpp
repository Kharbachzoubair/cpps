#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    this->type = "Dog";
    std::cout << "Dog constructor: WOOF! A Dog and its Brain arrived." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor: Performing deep copy of Brain." << std::endl;
    this->brain = new Brain(*(other.brain)); 
}

Dog::~Dog() {
    delete this->brain; 
    std::cout << "Dog destructor: Bye, the Dog and its Brain were deleted." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator: Deep copy assignment." << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        
        delete this->brain; 
        
        this->brain = new Brain(*(other.brain)); 
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog: WOOF! WOOF! I am the " << this->type << "." << std::endl;
}

const std::string& Dog::getType() const {
    return this->type;
}

void	Dog::setBrainIdea(int index, const std::string& idea)
{
	brain->setIdea(index, idea);
}

void	Dog::showBrainIdea(int index) const
{
	std::cout << "Dog idea[" << index << "]: " << brain->getIdea(index) << std::endl;
}