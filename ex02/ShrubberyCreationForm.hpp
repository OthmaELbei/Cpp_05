/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:22:03 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/30 14:24:07 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
private:
    std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(const ShrubberyCreationForm &op);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &op);
    ~ShrubberyCreationForm();

    std::string gettarget() const;
    void action() const;
};

#endif