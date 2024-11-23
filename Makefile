# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 21:44:13 by dyuri-de          #+#    #+#              #
#    Updated: 2024/10/26 21:44:14 by dyuri-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  src/ft_putnbr_fd.c \
       src/ft_putchar_fd.c \
       src/ft_putendl_fd.c \
       src/ft_strlcpy.c \
       src/ft_strlen.c \
       src/ft_calloc.c \
       src/ft_bzero.c \
       src/ft_memcpy.c \
       src/ft_putstr_fd.c \
       # src/ft_strjoin.c \
       # src/ft_substr.c \
       # src/ft_strdup.c \
       # src/ft_atoi.c \
       # src/ft_memmove.c \
       # src/ft_strnstr.c \
       # src/ft_strncmp.c \
       # src/ft_memchr.c \
       # src/ft_strrchr.c \
       # src/ft_strchr.c \
       # src/ft_isalnum.c \
       # src/ft_isalpha.c \
       # src/ft_isdigit.c \
       # src/ft_isascii.c \
       # src/ft_isprint.c \
       # src/ft_toupper.c \
       # src/ft_tolower.c \
       # src/ft_memset.c \
       # src/ft_strlcat.c \
       # src/ft_strncmp.c \
       # src/ft_memcmp.c \

OBJS = ${SRC:.c=.o}
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
PATH_BUILD = ./build/

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@ 

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
