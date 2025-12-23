/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:38:35 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/23 13:13:05 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form(std::string name, int gradeToSign, int gredeToExecute)
    : name(name),isSigned(false), gradeToSign(gradeToSign), gredeToExecute(gredeToExecute)
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
std::string Form::getName() const
{
    return name;
}
bool Form::getSigned() const
{
    return isSigned;
}
int Form::getgradeToSige() const
{
    return gradeToSign;
}
int Form::getgredeToExecute() const
{
    return gredeToExecute;
}
void Form::beisSigned(Bureaucrat &b)
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
std::ostream &operator<<(std::ostream &out, const Form &op)
{
    out << "Form: " << op.getName()
        << " this Signed is: " << op.getSigned()
        << " grade to signed " << op.getgradeToSige()
        << " grade to execute " << op.getgredeToExecute() << std::endl;

    return out;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return "gared is too high";
};
const char *Form::GradeTooLowException::what() const throw()
{
    return "gared is too low";
};
