# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 11:48:40 by jbernard          #+#    #+#              #
#    Updated: 2023/04/11 13:42:27 by jbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include setting.mk

NAME = libft.a
HEADER = ./include/libft.h
CC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR := src
OBJ_DIR := obj

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

all : $(NAME)

$(OBJ_DIR):
	@ mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJ_FILES)
	@ $(AR) $(NAME) $(OBJ_FILES)

$(OBJ_FILES) : $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADER) | $(OBJ_DIR)
	@ printf "$(GREEN)- ⚡⚡⚡ -> Compiling $(PURPLE)$(notdir $@)$(GREEN) using $(PURPLE)$(notdir $<)$(GREEN) ...       \r$(RESET)"
	@ $(CC) $(CFLAGS) -c $< -o $@

clean :
	@ rm -rf $(OBJ_DIR)

fclean : clean
	@ rm -rf $(NAME)

re : fclean allgs
