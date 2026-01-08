/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:21:58 by oelbied           #+#    #+#             */
/*   Updated: 2026/01/06 10:27:43 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm() {};
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 72, 45), target("default") {};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &op) : AForm(op), target(op.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op)
{
    if (this != &op)
    {
        AForm::operator=(op);
        this->target = op.target;
    }
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
std::string ShrubberyCreationForm::gettarget() const
{
    return this->target;
};
void ShrubberyCreationForm::action() const
{
    std::string filename =this->target + "shrr";
    std::ofstream file(filename.c_str());
    file << "        \\*\\/      " << std::endl;
    file << "         \\|/-*        " << std::endl;
    file << "         /||\\\\-*      " << std::endl;
    file << "         /||\\/\\\\ -*     " << std::endl;
    file << "         /||\\/\\\\\\-*     " << std::endl;
    file << "         /*\\      " << std::endl;
    file << "         /*\\      " << std::endl;
    file.close();
}