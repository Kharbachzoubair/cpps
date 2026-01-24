// AForm.hpp
#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm {
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExec;
public:
    AForm(std::string name, int gradeToSign, int gradeToExec);
    virtual ~AForm();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExec() const;

    void beSigned(const Bureaucrat& b);
    
    // The subject's required execution logic
    void execute(Bureaucrat const & executor) const;
    virtual void executeAction() const = 0; 

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw() { return "Grade too high!"; }
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw() { return "Grade too low!"; }
    };
    class FormNotSignedException : public std::exception {
        virtual const char* what() const throw() { return "Form is not signed!"; }
    };
};

std::ostream& operator<<(std::ostream& o, const AForm& i);

#endif