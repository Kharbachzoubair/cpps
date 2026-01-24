// ShrubberyCreationForm.hpp
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
    std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    void executeAction() const;
};
#endif

