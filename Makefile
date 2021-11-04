NAME= libft.a

CFLAGS = -Wextra -Wall -Werror
CC = gcc $(CFLAGS)
SRCS = $(shell find . -type f -name "*.c")
HEADERS = $(shell find . -type f -name "*.h")
RM = rm -rf
OBJDIR = .obj
OBJS = $(patsubst %.c, $(OBJDIR)/%.o, $(SRCS))

