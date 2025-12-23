/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:40:26 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/23 12:51:15 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grades) : name(name)
{
    if (grades < 1)
    {
        throw GradeTooHighException();
    }
    if (grades > 150)
    {
        throw GradeTooLowException();
    }

    grade = grades;
};
int Bureaucrat::getGrade() const
{
    return grade;
}
std::string Bureaucrat::getName() const
{
    return name;
};
void Bureaucrat::incrementing()
{
    if (grade <= 1)
    {
        throw GradeTooHighException();
    }
    grade -= 1;
};
void Bureaucrat::decrement()
{
    if (grade >= 150)
    {
        throw GradeTooLowException();
    }
    grade += 1;
};
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "gared is too high";
};
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "gared is too low";
};

void Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beisSigned(*this);
        std::cout << "Ahmed signed TaxForm" << std ::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
};