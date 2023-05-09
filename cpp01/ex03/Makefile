NAME = violence

src = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

header = HumanA.hpp HumanB.hpp Weapon.hpp

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src) $(header)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all