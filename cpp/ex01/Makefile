NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Contact.cpp
rm = rm -rf
OBJS = $(SRCS:.cpp=.o)
INC = PhoneBook.hpp Contact.hpp

$(NAME): $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(rm) $(OBJS)

fclean: clean
	$(rm) $(NAME)

re: fclean all
