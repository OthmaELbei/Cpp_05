/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:10:37 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/19 11:10:00 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string name, int grades);
    int getGrade() const;
    std::string getName() const;
    void incrementing();
    void decrement();
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
};

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
int main()
{
    try
    {
        Bureaucrat a("ahmed", 0);
        a.incrementing();
        std::cout << a.getGrade() << std::endl;
        a.incrementing();
        // a.decrement();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
