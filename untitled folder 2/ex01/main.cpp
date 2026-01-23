#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "--- TEST 1: Successful Signing ---" << std::endl;
    try {
        Bureaucrat boss("The Boss", 1);
        Form contract("Standard Contract", 25, 50);

        std::cout << boss << std::endl;
        std::cout << contract << std::endl;

        boss.signForm(contract);
        
        std::cout << contract << std::endl; 
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 2: Failure - Grade Too Low ---" << std::endl;
    try {
        Bureaucrat intern("Intern", 150);
        Form secretProject("Top Secret", 2, 2);

        std::cout << intern << std::endl;
        std::cout << secretProject << std::endl;

        intern.signForm(secretProject);
        std::cout << secretProject << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 3: Invalid Form Creation (Grade 151) ---" << std::endl;
    try {
        Form illegal("Illegal Form", 151, 151);
    } catch (std::exception &e) {
        std::cerr << "Caught expected error: " << e.what() << std::endl;
    }

    return 0;
}