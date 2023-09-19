# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 04:00:56 by faksouss          #+#    #+#              #
#    Updated: 2023/09/19 22:49:35 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HDR = inc/ClapTrap.hpp inc/ScavTrap.hpp inc/FragTrap.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FragTrap

OBJ_DIR = obj

SRC_DIR = src

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

INC = -I inc

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HDR)
	mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) -c $< $(INC) -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all re fclean clean

.SILENT: all re fclean clean $(NAME) $(OBJ) 
