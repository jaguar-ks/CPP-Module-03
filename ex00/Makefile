# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 01:38:45 by faksouss          #+#    #+#              #
#    Updated: 2023/09/17 04:00:52 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ClapTrap.cpp

INC = ClapTrap.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ClapTrap

OBJ_DIR = obj

SRC_DIR = src

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(INC)
	mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) -c $< -I . -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all re fclean clean

.SILENT: all re fclean clean $(NAME) $(OBJ) 
