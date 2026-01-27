#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
    Intern  someRandomIntern;
    Bureaucrat boss("The Boss", 1);
    AForm* rrf;

    std::cout << "--- Test 1: Valid Form ---" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf) {
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf;
    }

    std::cout << "\n--- Test 2: Invalid Form ---" << std::endl;
    rrf = someRandomIntern.makeForm("coffee request", "Intern");
    if (!rrf) {
        std::cout << "Success: Intern didn't create a non-existent form." << std::endl;
    }

    return 0;
}