#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern& src) { (void)src; }
Intern& Intern::operator=(const Intern& rhs) { (void)rhs; return *this; }
Intern::~Intern() {}

AForm* Intern::makeShrubbery(std::string target) { return new ShrubberyCreationForm(target); }
AForm* Intern::makeRobotomy(std::string target) { return new RobotomyRequestForm(target); }
AForm* Intern::makePardon(std::string target) { return new PresidentialPardonForm(target); }

AForm* Intern::makeForm(std::string formName, std::string target) {
    std::string names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm* (Intern::*methods[])(std::string) = {
        &Intern::makeShrubbery,
        &Intern::makeRobotomy,
        &Intern::makePardon
    };

    for (int i = 0; i < 3; i++) {
        if (formName == names[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*methods[i])(target);
        }
    }

    std::cout << "Error: Intern cannot create '" << formName << "' (Unknown Form Name)" << std::endl;
    return NULL;
}