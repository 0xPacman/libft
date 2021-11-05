SRC = $(wildcard *.c)

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SRC:.c=.o)

NAME = libft.a
CC = gcc
RM = rm -f
AR = ar rcs

all: $(NAME)

clean:
		$(RM) $(OBJECTS)

limp:
		$(RM) a.out

%.o: %.c
		$(CC) $(CFLAGS) -c -I./ $< -o $@

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
