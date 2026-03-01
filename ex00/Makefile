
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = Bureaucrat.cpp main.cpp
OPJECT = $(FILES:.cpp=.o)

NAME = Bureaucrat

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 