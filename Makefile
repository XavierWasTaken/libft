# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pda-roch <pda-roch@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 12:44:08 by pda-roch          #+#    #+#              #
#    Updated: 2024/05/17 18:20:16 by pda-roch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Source and object files
SRCS = ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_bzero.c ft_memcpy.c \
		ft_memset.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_strdup.c \
		ft_strnstr.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_tolower.c ft_toupper.c ft_atoi.c ft_strncmp.c \
		ft_memmove.c ft_memcmp.c ft_calloc.c ft_strjoin.c ft_substr.c \
		ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_strmapi.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_striteri.c \
		ft_split.c
	
SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

# Compiler and flags
LIBC = ar -rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Target for executable
$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

# Default target
all: $(NAME)

bonus: $(NAME) $(OBJS_B)
	$(LIBC) $(NAME) $(OBJS_B)

# Clean up
clean:
	rm -f $(OBJS) $(OBJS_B)

# Full clean up
fclean: clean
	rm -f $(NAME)

# Rebuild project
re: fclean all

# Phony targets
.PHONY: all bonus clean fclean re

#libft-unit-test
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCS_B)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_B)