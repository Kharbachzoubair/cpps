#include "Brain.hpp"

// Assuming IDEA_COUNT is defined in Brain.hpp as 100
#define IDEA_COUNT 100 

Brain::Brain()
{
    for (int i = 0; i < IDEA_COUNT; ++i) {
        ideas[i] = "default idea";
    }
    std::cout << "Brain constructor called" << std::endl;
}

// NOTE: The Brain::Brain(const std::string ideas[100]) constructor is removed.

Brain::Brain(const Brain &obj)
{
    for (int i = 0; i < IDEA_COUNT; ++i)
    {
        this->ideas[i] = obj.ideas[i]; // Deep Copy of array elements
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
    if (this != &obj) {
        for (int i = 0; i < IDEA_COUNT; ++i)
        {
            this->ideas[i] = obj.ideas[i]; // Deep Copy assignment
        }
    }
    std::cout << "Brain copy assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
void Brain::setIdea(int index, const std::string& idea) {
    // Assuming IDEA_COUNT is 100
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

const std::string& Brain::getIdea(int index) const {
    // Assuming IDEA_COUNT is 100
    if (index >= 0 && index < 100)
        return ideas[index];
    
    // Safety return if index is out of bounds
    static const std::string error = "Index out of bounds";
    return error;
}