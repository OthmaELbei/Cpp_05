/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:13:18 by oelbied           #+#    #+#             */
/*   Updated: 2026/01/08 09:46:46 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

static AForm *createShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}
static AForm *createRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}
static AForm *createPresidential(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

Intern::Intern() {

};
Intern::Intern(const Intern &other)
{
    (void)other;
}
Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}
Intern::~Intern() {

};

AForm *Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string forms[3] = 
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon",
    };
    AForm* (*creators[3])(const std::string&) = 
    {
        createShrubbery,
        createRobotomy,
        createPresidential,
    };
    for(int i = 0 ; i < 3 ;i++)
    {
        if(forms[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return creators[i](target);
        }
    }
    std::cout << "Error: Form does not exist" << std::endl;
    return NULL;
    
};