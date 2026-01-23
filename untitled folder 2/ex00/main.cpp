#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat hercules("Hercules", 2);
        std::cout << hercules << std::endl;
        
        hercules.incrementGrade();
        std::cout << "After promotion: " << hercules << std::endl;
        
        hercules.incrementGrade(); 
    }
    catch (std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "-----------------------------------" << std::endl;

    try {
        Bureaucrat badOne("Shadow", 151);
    }
    catch (std::exception &e) {
        std::cerr << "Creation error: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat last("zoubair", 50);
        std::cout<<last<<std::endl;
        last.decrementGrade();
        std::cout<<"after decrement"<<last<<std::endl;

    }
    catch(std::exception &e)
    {
        std::cerr<<"Creation erro: "<<e.what()<<std::endl;
    }

    return 0;
}