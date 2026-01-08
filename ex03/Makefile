# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/24 10:36:06 by oelbied           #+#    #+#              #
#    Updated: 2026/01/08 09:37:06 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = AForm.cpp Intern.cpp Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp 

OPJECT = $(FILES:.cpp=.o)

NAME = AForm

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp AForm.hpp  Intern.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 