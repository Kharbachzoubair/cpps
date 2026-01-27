#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool              _issigned;
        const int         _gardetosign;
        const int         _gardetoexceute;

    public:
       Form();
       Form(const std::string name, const int gradetosign, const int gardetoexecute);
       Form(const Form& src);
       Form& operator=(const Form& rhs);
       ~Form();

       std::string getName() const;
       bool        getIsSigned() const;
       int         getGradeToSign() const;
       int         getGradeToExecute() const;

       void beSigned(const Bureaucrat& b);

       class GradeTooHighException : public std::exception
       {
            public:
                virtual const char* what() const throw();
       };

       class GradeTooLowException : public std::exception
       {
            public:
                virtual const char* what() const throw();
       };
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);

#endif