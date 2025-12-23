/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:43:20 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/23 13:01:58 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string name;
    bool isSigned;
    const  int gradeToSign;
    const  int gredeToExecute;

public:
    Form(std::string name, int gradeToSign, int gredeToExecute);
    std ::string getName() const;
    bool getSigned() const;
    int getgradeToSige() const;
    int getgredeToExecute() const;

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    void beisSigned(Bureaucrat &b);
};
std::ostream &operator<<(std::ostream &out, const Form &op);
#endif