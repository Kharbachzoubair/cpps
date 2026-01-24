#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

// Forward declaration: كنقولو للكومبيلر بلي كاين واحد الكلاص سميتها Form غانخدمو بها
class AForm; 

class Bureaucrat {
private:
    const std::string _name;
    int               _grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat& operator=(const Bureaucrat& rhs);
    ~Bureaucrat();

    std::string getName() const;
    int         getGrade() const;

    void        incrementGrade();
    void        decrementGrade();

    // الدالة اللي كانت ناقصاك فـ الـ Header
    void        signAForm(AForm& f);
    void executeForm(AForm const & form) const;
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() { return "Grade too high"; }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() { return "Grade too low"; }
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif