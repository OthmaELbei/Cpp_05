/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:40:26 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/19 11:44:50 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
}
void Bureaucrat::incrementing()
{
    if (grade <= 1)
    {
        throw GradeTooHighException();
    }
    grade -= 1;
}
void Bureaucrat::decrement()
{
    if (grade >= 150)
    {
        throw GradeTooLowException();
    }
    grade += 1;
}
const char *Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "gared is too high";
}
const char *Bureaucrat::GradeTooLowException::what() const noexcept
{
    return "gared is too low";
}
