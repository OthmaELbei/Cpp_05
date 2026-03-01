/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:44:14 by oelbied           #+#    #+#             */
/*   Updated: 2026/01/08 09:45:19 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main() {
    try()
    {
        Intern cretAfrom;
        AForm *fristForm = cretAfrom.makeForm("shrubbery creation","ali");
        Bureaucrat boss("ahmed",30);
        if(fristForm)
        {
             boss.signForm(sd);
            boss.excuteForm(sd);

        }
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

}