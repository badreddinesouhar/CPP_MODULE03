NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HDF = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
OBJ = $(SRC:.cpp=.o )

%.o: %.cpp $(HDF)
	$(CC) $(CFLAGS) -c $< -o $@

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
