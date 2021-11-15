SRCS = main.cpp AMateria.cpp Cure.cpp MateriaSource.cpp Character.cpp Ice.cpp
OBJS = $(SRCS:.cpp=.o)

CC = clang++
CFLAGS = -Wall -Wextra -Wall -std=c++98

NAME = Interface
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re