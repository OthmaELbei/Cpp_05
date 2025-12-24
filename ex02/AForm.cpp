/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:43:44 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/24 13:28:07 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// AForm::AForm(){};
AForm::AForm(std::string name, int gradeToSign, int gredeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gredeToExecute(gredeToExecute)
{
    if (gradeToSign < 1 || gredeToExecute < 1)
    {
        throw GradeTooHighException();
    }
    if (gradeToSign > 150 || gredeToExecute > 150)
    {
        throw GradeTooLowException();
    }
}
std::string AForm::getName() const
{
    return name;
}
bool AForm::getSigned() const
{
    return isSigned;
}
int AForm::getgradeToSige() const
{
    return gradeToSign;
}
int AForm::getgredeToExecute() const
{
    return gredeToExecute;
}
void AForm::beisSigned(Bureaucrat &b)
{
    if (b.getGrade() <= gradeToSign)
    {
        isSigned = true;
    }
    else if (b.getGrade() > gradeToSign)
    {
        throw GradeTooLowException();
    }
}
std::ostream &operator<<(std::ostream &out, const AForm &op)
{
    out << "Form: " << op.getName()
        << " this Signed is: " << op.getSigned()
        << " grade to signed " << op.getgradeToSige()
        << " grade to execute " << op.getgredeToExecute() << std::endl;

    return out;
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return "gared is too high";
};
const char *AForm::GradeTooLowException::what() const throw()
{
    return "gared is too low";
};
const char *AForm::FormNotSignedException::what() const throw()
{
    return "gared is too low";
};
AForm::AForm(const AForm &op):name(op.name),isSigned(.)
{
    this->name = op.getName();
    this->isSigned = op.getSigned();
    this->gradeToSign = op.getgradeToSige();
    this->gredeToExecute = op.getgredeToExecute();
}