/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:22:46 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/24 13:16:38 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {};
PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &op)
{
    
}