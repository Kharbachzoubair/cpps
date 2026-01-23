#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("default"), _issigned(false), _gardetosign(150), _gardetoexceute(150) {}
Form::Form(std::string name, const int gradetosign, const int gardetoexecute) 
    : _name(name), _issigned(false), _gardetosign(gradetosign), _gardetoexceute(gardetoexecute) 
{

    if (gradetosign < 1 || gardetoexecute < 1)
        throw Form::GradeTooHighException();
    if (gradetosign > 150 || gardetoexecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src) 
    : _name(src._name), _issigned(src._issigned), _gardetosign(src._gardetosign), _gardetoexceute(src._gardetoexceute) 
{}


Form& Form::operator=(const Form& rhs) {
    if (this != &rhs) {

        this->_issigned = rhs._issigned;
    }
    return *this;
}

Form::~Form() {}
std::string Form::getName() const { return _name; }
bool Form::getIsSigned() const { return _issigned; }
int Form::getGradeToSign() const { return _gardetosign; }
int Form::getGradeToExecute() const { return _gardetoexceute; }

void Form::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > _gardetosign)
        throw Form::GradeTooLowException();
    _issigned = true;
}

std::ostream& operator<<(std::ostream& o, const Form& rhs) {
    o << "Form " << rhs.getName() 
      << ", status: " << (rhs.getIsSigned() ? "signed" : "not signed")
      << ", grade to sign: " << rhs.getGradeToSign()
      << ", grade to execute: " << rhs.getGradeToExecute();
    return o;
}