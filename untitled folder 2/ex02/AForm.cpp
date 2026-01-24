// AForm.cpp
#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) 
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
    if (gradeToSign < 1 || gradeToExec < 1) throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150) throw GradeTooLowException();
}

AForm::~AForm() {}

std::string AForm::getName() const { return _name; }
bool AForm::getIsSigned() const { return _isSigned; }
int AForm::getGradeToSign() const { return _gradeToSign; }
int AForm::getGradeToExec() const { return _gradeToExec; }

void AForm::beSigned(const Bureaucrat& b) {
    if (b.getGrade() > _gradeToSign) throw GradeTooLowException();
    _isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const {
    if (!_isSigned) throw FormNotSignedException();
    if (executor.getGrade() > _gradeToExec) throw GradeTooLowException();
    this->executeAction();
}

std::ostream& operator<<(std::ostream& o, const AForm& i) {
    o << "Form " << i.getName() << " (Sign: " << i.getGradeToSign() << ", Exec: " << i.getGradeToExec() << ")";
    return o;
}