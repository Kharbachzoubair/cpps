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
    
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();      
    const Animal* i = new Cat();      

    std::cout << "\n--- TYPE OUTPUTS ---" << std::endl;
    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 

    std::cout << "\n--- SOUND OUTPUTS (Dynamic Dispatch) ---" << std::endl;
    i->makeSound(); 
    j->makeSound(); 
    meta->makeSound(); 

    std::cout << "\n--- CLEANUP (VIRTUAL DESTRUCTORS WORK) ---" << std::endl;
    delete j;    
    delete i;

    std::cout << "\n==================================================" << std::endl;
    std::cout << "        TEST 2: STATIC BINDING (WrongAnimal)" << std::endl;
    std::cout << "==================================================" << std::endl;

    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat(); 

    std::cout << "\n--- TYPE OUTPUTS ---" << std::endl;
    std::cout << wrong_i->getType() << " " << std::endl; 

    std::cout << "\n--- SOUND OUTPUTS (Static Dispatch) ---" << std::endl;
    wrong_i->makeSound(); 
    wrong_meta->makeSound(); 

    std::cout << "\n--- CLEANUP (NON-VIRTUAL DESTRUCTORS) ---" << std::endl;
    delete wrong_i;
    
    return 0;
}