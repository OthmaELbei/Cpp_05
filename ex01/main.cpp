/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:40:04 by oelbied           #+#    #+#             */
/*   Updated: 2025/12/19 11:47:30 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("ahmed", 0);
        a.incrementing();
        std::cout << a.getGrade() << std::endl;
        a.incrementing();
        // a.decrement();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
