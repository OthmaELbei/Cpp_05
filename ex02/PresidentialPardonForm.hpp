/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:14:39 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/30 11:18:48 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(const PresidentialPardonForm &op);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &op);
    ~PresidentialPardonForm();

    std::string gettarget() const;
    void action() const;
};

#endif