# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/19 11:45:54 by oelbied           #+#    #+#              #
#    Updated: 2025/12/19 11:46:53 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES =  Bureaucrat.cpp Form.cpp main.cpp 

OPJECT = $(FILES:.cpp=.o)

NAME = ScavTrap

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 