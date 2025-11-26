#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define ARRAY_SIZE 4 

void test_minimal_leak_check() {
    std::cout << "\n==================================================" << std::endl;
    std::cout << "        TEST 1: MINIMAL LEAK CHECK (Subject)" << std::endl;
    std::cout << "==================================================" << std::endl;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n--- Cleanup ---" << std::endl;
    delete j; 
    delete i; 
}

void test_polymorphic_array() {
    std::cout << "\n==================================================" << std::endl;
    std::cout << "        TEST 2: POLYMORPHIC ARRAY TEST" << std::endl;
    std::cout << "==================================================" << std::endl;

    Animal* animals[ARRAY_SIZE];
    
    std::cout << "\n--- Array Filling (Half Dog, Half Cat) ---" << std::endl;
    for (int k = 0; k < ARRAY_SIZE; k++) {
        if (k < ARRAY_SIZE / 2) {
            animals[k] = new Dog();
        } else {
            animals[k] = new Cat();
        }
    }

    std::cout << "\n--- Array Deletion (Check Destructor Order for Leak) ---" << std::endl;
    for (int k = 0; k < ARRAY_SIZE; k++) {
        delete animals[k]; 
    }
}

void test_deep_copy() {
    std::cout << "\n==================================================" << std::endl;
    std::cout << "        TEST 3: DEEP COPY VERIFICATION" << std::endl;
    std::cout << "==================================================" << std::endl;

    Dog original_dog;
    original_dog.getBrain()->setIdea(0, "Original Dog Idea!"); 

    std::cout << "\n--- Copy Construction ---" << std::endl;
    Dog copied_dog = original_dog;

    std::cout << "\n--- Modify Original Brain ---" << std::endl;
    original_dog.getBrain()->setIdea(0, "NEW MODIFIED IDEA!");

    std::cout << "\n--- Verification ---" << std::endl;
    std::cout << "Original Dog Idea (after modification): " << original_dog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea (should be unchanged):  " << copied_dog.getBrain()->getIdea(0) << std::endl;

    if (original_dog.getBrain() != copied_dog.getBrain() && 
        copied_dog.getBrain()->getIdea(0) == "Original Dog Idea!") {
        std::cout << "SUCCESS: Deep copy verified. Brains are independent in memory." << std::endl;
    } else {
        std::cout << "FAILURE: Copy was shallow, or data was not independent." << std::endl;
    }
}


int main() {
    test_minimal_leak_check();
    test_polymorphic_array();
    test_deep_copy();

    return 0;
}