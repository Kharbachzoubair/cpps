#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n==================================================" << std::endl;
    std::cout << "        TEST 1: RUN-TIME POLYMORPHISM (Animal)" << std::endl;
    std::cout << "==================================================" << std::endl;
    
    // Required initializations using Base Class Pointers
    const Animal* meta = new Animal(); // Base pointer -> Base object
    const Animal* j = new Dog();      // Base pointer -> Derived object (Polymorphic)
    const Animal* i = new Cat();      // Base pointer -> Derived object (Polymorphic)

    std::cout << "\n--- TYPE OUTPUTS ---" << std::endl;
    // Note the trailing space and endl as required by the subject
    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 

    std::cout << "\n--- SOUND OUTPUTS (Dynamic Dispatch) ---" << std::endl;
    // These calls use the V-Table mechanism to execute the correct derived function.
    i->makeSound(); // Will output the cat sound!
    j->makeSound(); // Will output the dog sound!
    meta->makeSound(); // Will output the animal sound!

    std::cout << "\n--- CLEANUP (VIRTUAL DESTRUCTORS WORK) ---" << std::endl;
    delete meta;
    delete j;    
    delete i;

    // --- Start of Required Additional Tests (WrongAnimal for contrast) ---

    std::cout << "\n==================================================" << std::endl;
    std::cout << "        TEST 2: STATIC BINDING (WrongAnimal)" << std::endl;
    std::cout << "==================================================" << std::endl;

    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat(); // Base pointer -> Derived object

    std::cout << "\n--- TYPE OUTPUTS ---" << std::endl;
    std::cout << wrong_i->getType() << " " << std::endl; 

    std::cout << "\n--- SOUND OUTPUTS (Static Dispatch) ---" << std::endl;
    // Non-virtual: The binding is based on the pointer type (WrongAnimal*).
    wrong_i->makeSound(); // **Outputs WrongAnimal sound!** (The required behavior)
    wrong_meta->makeSound(); 

    std::cout << "\n--- CLEANUP (NON-VIRTUAL DESTRUCTORS) ---" << std::endl;
    // Only the Base destructor (~WrongAnimal) is called for wrong_i!
    delete wrong_meta; 
    delete wrong_i;
    
    return 0;
}