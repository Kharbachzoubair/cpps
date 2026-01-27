#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
    : AForm("ShrubberyCreation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) 
    : AForm(src), _target(src._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
    if (this != &rhs) {
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::executeAction() const {
    std::ofstream ofs((_target + "_shrubbery").c_str());
    if (!ofs.is_open()) {
        std::cerr << "Error: Could not create file." << std::endl;
        return;
    }

    // Note: Every \ must be written as \\ to avoid escape sequence errors
    ofs << "               ,@@@@@@@," << std::endl;
    ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    ofs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    ofs << "       |o|        | |         | |" << std::endl;
    ofs << "       |.|        | |         | |" << std::endl;
    ofs << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;

    ofs.close();
    std::cout << "Shrubbery has been planted at " << _target << "_shrubbery" << std::endl;
}