# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 17:12:01 by abouazi           #+#    #+#              #
#    Updated: 2021/11/30 18:54:33 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
RM=rm -f

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  	ft_isdigit.c ft_isascii.c ft_isprint.c ft_memchr.c \
		ft_memcpy.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_putstr_fd.c ft_memcmp.c ft_split.c \
		ft_striteri.c ft_strmapi.c ft_memmove.c ft_itoa.c


OBJ = $(SRC:%.c=%.o)

INC = ./inc/
CC = gcc
LDFLAGS=-L.
LDLIBS=-lft
CFLAGS = -Wall -Werror -Wextra


$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c libft.h
		$(CC) -I. -o $@ -c $< $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all re aclean clean
