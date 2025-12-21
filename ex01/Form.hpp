/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:43:20 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/21 11:57:21 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string name;
    bool isSigned = false;
    const int gradeToSign;
    const int gredeToExecute;

public:
    Form ::Form(std::string name, int gradeToSign, int gredeToExecute)
        : name(name), gradeToSign(gradeToSign), gredeToExecute(gredeToExecute)
    {
    }
    const std ::string getName() const
    {
        return name;
    }
    const bool getSigned()
    {
        return isSigned;
    }
    const int getgradeToSige()
    {
        return gradeToSign;
    }
    const int getgredeToExecute()
    {
        return gredeToExecute;
    }

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const noexcept override;
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const noexcept override;
    };
    void beisSigned(Bureaucrat &b)
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
};
std::ostream &operator<<(std::ostream &out, const Form &op)
{
    out << "Form: " << op.getName()
    << "this Signed is: " << op.getSigned() <<
    << "grade to signed" << op.getg
    
    return out;
}
#endif