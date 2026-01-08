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
    
    std::cout << "=== Test 1: Basic Form Creation ===" << std::endl;
    {
        Intern intern;
        AForm* form;
        
        // Test shrubbery creation
        std::cout << "\n1. Creating shrubbery creation form:" << std::endl;
        form = intern.makeForm("shrubbery creation", "home");
        if (form) {
            std::cout << *form << std::endl;
            delete form;
        }
        
        // Test robotomy request
        std::cout << "\n2. Creating robotomy request form:" << std::endl;
        form = intern.makeForm("robotomy request", "Bender");
        if (form) {
            std::cout << *form << std::endl;
            delete form;
        }
        
        // Test presidential pardon
        std::cout << "\n3. Creating presidential pardon form:" << std::endl;
        form = intern.makeForm("presidential pardon", "Arthur");
        if (form) {
            std::cout << *form << std::endl;
            delete form;
        }
    }
    
    std::cout << "\n=== Test 2: Invalid Form Name ===" << std::endl;
    {
        Intern intern;
        AForm* form;
        
        form = intern.makeForm("unknown form", "someone");
        if (!form) {
            std::cout << "Correctly returned NULL" << std::endl;
        }
    }
    
    std::cout << "\n=== Test 3: Complete Workflow ===" << std::endl;
    {
        Intern intern;
        Bureaucrat boss("Boss", 1);
        AForm* form;
        
        // Create form
        form = intern.makeForm("robotomy request", "Target");
        
        if (form) {
            // Sign and execute
            boss.signForm(*form);
            boss.excuteForm(*form);
            delete form;
        }
    }
    
    std::cout << "\n=== Test 4: Subject Example ===" << std::endl;
    {
        Intern someRandomIntern;
        AForm* rrf;
        
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        
        if (rrf) {
            std::cout << *rrf << std::endl;
            delete rrf;
        }
    }
    
    std::cout << "\n✅ All tests completed!" << std::endl;
    
    return 0;
}