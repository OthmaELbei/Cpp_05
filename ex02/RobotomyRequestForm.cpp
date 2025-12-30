/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:46:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/30 13:36:53 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {};
RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45), target("default") {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &op) : AForm(op), target(op.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op)
{
    if (this != &op)
    {
        AForm::operator=(op);
        this->target = op.target;
    }
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
std::string RobotomyRequestForm::gettarget() const
{
    return this->target;
};
void RobotomyRequestForm::action() const
{
    if (rand() % 2 == 0)
    {
        std::cout << this->target << "has been robotomized successfully 50% of the time" << std::endl;
    }
    else
    {
        std::cout << " informs that the robotomy failed" << std::endl;
    }
}