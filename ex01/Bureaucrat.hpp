/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:41:10 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/19 11:42:55 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string name, int grades);
    int getGrade() const;
    std::string getName() const;
    void incrementing();
    void decrement();
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const noexcept override;
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const noexcept override;
    };
};

#endif