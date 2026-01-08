/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:13:27 by oelbied           #+#    #+#             */
/*   Updated: 2026/01/07 10:30:19 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
class AForm;
class Intern
{
  public:
  Intern();
  Intern(const Intern &other);
  Intern &operator=(const Intern &other);
  AForm *makeForm(std::string const& name, std::string const &target);
  ~Intern();
  
};

#endif