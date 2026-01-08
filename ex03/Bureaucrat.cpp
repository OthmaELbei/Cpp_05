/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:43:01 by oelbied           #+#    #+#             */
/*   Updated: 2026/01/06 11:34:02 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beisSigned(*this);
        std::cout<< name << " signed " << f.getName() << std ::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << "not sign " << f.getName() << " because "<< e.what() << std::endl;
    }
};
    void Bureaucrat::excuteForm(AForm const & form) const
    {
        try
        {
            form.execute(*this);
            std::cout << this->getName() << " executed " << form.getName() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << this->getName() << "failed to execute " << form.getName() << e.what() << '\n';
        }
        
        
    }