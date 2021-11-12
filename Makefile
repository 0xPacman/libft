#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahjadani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 23:12:58 by ahjadani          #+#    #+#              #
#    Updated: 2021/11/12 23:28:51 by ahjadani         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

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

rmout:
		$(RM) a.out

%.o: %.c
		$(CC) $(CFLAGS) -c -I./ $< -o $@

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
