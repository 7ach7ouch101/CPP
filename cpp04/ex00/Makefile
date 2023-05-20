NAME = Poly

src = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp

header = Dog.hpp Cat.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp

flags = -Wall  -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src) $(header)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all