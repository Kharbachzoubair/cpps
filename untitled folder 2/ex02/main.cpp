#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    // Seed for Robotomy random success/failure
    std::srand(std::time(NULL));

    std::cout << "--- BUREAUCRAT INITIALIZATION ---" << std::endl;
    Bureaucrat boss("The Boss", 1);
    Bureaucrat intern("The Intern", 142);
    Bureaucrat middleManager("Manager", 60);

    std::cout << "\n--- TEST 1: Shrubbery (Sign 145, Exec 137) ---" << std::endl;
    ShrubberyCreationForm shrub("Garden");
    intern.signForm(shrub);    
    intern.executeForm(shrub); 
    boss.executeForm(shrub);   

    std::cout << "\n--- TEST 2: Robotomy (Sign 72, Exec 45) ---" << std::endl;
    RobotomyRequestForm robot("Target-X");
    middleManager.signForm(robot); 
    boss.executeForm(robot);
    boss.executeForm(robot);
    boss.executeForm(robot);

    std::cout << "\n--- TEST 3: Presidential Pardon (Sign 25, Exec 5) ---" << std::endl;
    PresidentialPardonForm pardon("Marouane");
    boss.signForm(pardon);
    boss.executeForm(pardon);

    std::cout << "\n--- TEST 4: Security (Execution without signature) ---" << std::endl;
    PresidentialPardonForm unsignedForm("Intruder");
    boss.executeForm(unsignedForm); 

    // std::cout << "\n--- TEST 5: Grade Exceptions (Too Low) ---" << std::endl;
    // try {
    //     Bureaucrat fail("Invalid", 151);
    // } catch (std::exception &e) {
}