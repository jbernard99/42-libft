# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernard <jbernard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 11:48:40 by jbernard          #+#    #+#              #
#    Updated: 2021/05/18 14:34:13 by jbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# -*- MakeFile -*-
NAME = libft.a
HEADER = libft.h
CC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror

BSRC = $(wildcard *lst*.c)
SRC = $(filter-out $(BSRCS), $(wildcard *.c))
OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $^ 

bonus: $(BOBJ) $(OBJ)
	$(AR) $(NAME) $^

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

