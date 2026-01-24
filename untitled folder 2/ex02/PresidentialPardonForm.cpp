#include "PresidentialPardonForm.hpp"

// The subject requires grades: sign 25, exec 5
PresidentialPardonForm::PresidentialPardonForm(std::string target) 
    : AForm("PresidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) 
    : AForm(src), _target(src._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    if (this != &rhs) {
        // Attributes are const, so we leave this essentially empty 
        // while respecting the Orthodox Canonical Form.
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::executeAction() const {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}