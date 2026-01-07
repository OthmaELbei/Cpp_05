/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:44:14 by oelbied           #+#    #+#             */
/*   Updated: 2026/01/06 11:25:12 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        // std::cout << "----- SHRUBBERY TEST -----" << std::endl;
        Bureaucrat bob("Bob", 1);
        Bureaucrat mid("layk", 70);
        Bureaucrat leed("danke", 150);
        
        ShrubberyCreationForm sd("hello");
        RobotomyRequestForm robo("MsteRobo");
        PresidentialPardonForm brader("arter");
        bob.excuteForm(sd);
        bob.excuteForm(robo);
        bob.excuteForm(brader);
        
        mid.signForm(sd);
        mid.signForm(robo);
        mid.signForm(brader);

        
        
        
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
