#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private:
    const std::string  _name;
    int                _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat& operator+(const Bureaucrat& rhs);
        ~Bureaucrat();
        std::string getName()const;
        int         getGrade()const;

        void    incrementGrade();
        void    decrementGrade();  
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return "Bureaucrat : Grade is too low (min value is 1)";
                }
        };
        class GradeTooHigh :public std:: exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Bureaucrate: Grade is too high(nax value is 150)";
                }
        };
};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif 