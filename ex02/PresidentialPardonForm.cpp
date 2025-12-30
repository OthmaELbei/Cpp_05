/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:22:46 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/30 11:38:52 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {};
PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &op) : AForm(op), target(op.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op)
{
    if (this != &op)
    {
        AForm::operator=(op);
        this->target = op.target;
    }
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
std::string PresidentialPardonForm::gettarget() const
{
    return this->target;
};
void PresidentialPardonForm::action() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox."
              << std::endl;
}