# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 04:00:56 by faksouss          #+#    #+#              #
#    Updated: 2023/09/20 06:30:44 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HDR = inc/ClapTrap.hpp inc/ScavTrap.hpp inc/FragTrap.hpp inc/DiamondTrap.hpp

NAME = DiamondTrap

OBJ_DIR = obj

SRC_DIR = src

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

INC = -I inc

FLAGS = -Wall -Wextra -Werror $(INC) -std=c++98 -Wshadow -Wno-shadow

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HDR)
	mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all re fclean clean

.SILENT: all re fclean clean $(NAME) $(OBJ) 
