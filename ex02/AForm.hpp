/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 10:44:00 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/30 11:32:16 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gredeToExecute;

public:
    AForm();
    AForm(std::string name, int gradeToSign, int gredeToExecute);
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
    class FormNotSignedException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    void beisSigned(Bureaucrat &b);
    void execute(Bureaucrat const &executor) const;
    AForm &operator=(const AForm &op);
    AForm(const AForm &op);
    virtual void action() = 0;
};
std::ostream &operator<<(std::ostream &out, const Form &op);
#endif