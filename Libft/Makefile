# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seoyoo <seoyoo@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 18:38:25 by seoyoo            #+#    #+#              #
#    Updated: 2024/01/20 20:07:23 by seoyoo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# color setting
Color_Off = \033[0m		# Text Reset
Black = \033[0;30m		# Black
Green = \033[0;31m		# Green
Green = \033[0;32m		# Green
Yellow = \033[0;33m		# Yellow
Blue = \033[0;34m			# Blue
Purple = \033[0;35m		# Purple
Cyan = \033[0;36m			# Cyan
White = \033[0;37m		# White

# **************************************************************************** #

# function to print message with color
# $1: string, $2: color
define print
	@echo "$(2)$(1)$(Color_Off)"
endef

# **************************************************************************** #

# variables
NAME = libft.a
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))
INC = $(wildcard $(INC_DIR)/*.h)
TEST_DIR = test
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_INC = $(wildcard $(TEST_DIR)/*.h)
TEST_NAME = test

CC = gcc
W_FLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc

# **************************************************************************** #

# rules
all: $(NAME)

$(NAME): $(OBJ)
	@$(call print, "Compiling $(NAME)", $(Green))
	@$(AR) $(ARFLAGS) $@ $^
	@$(call print, "Done!", $(Green))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC)
	@$(call print, "Compiling $<", $(Green))
	@$(CC) $(W_FLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

clean:
	@$(call print, "Cleaning $(NAME)", $(Yellow))
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(call print, "Delete $(NAME)", $(Yellow))
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test