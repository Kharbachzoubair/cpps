#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <cstdlib> // For rand() and srand()

class RobotomyRequestForm : public AForm {
private:
    const std::string _target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& src);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
    virtual ~RobotomyRequestForm();

    void executeAction() const;
};

#endif