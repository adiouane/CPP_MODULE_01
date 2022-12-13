# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 03:22:11 by adiouane          #+#    #+#              #
#    Updated: 2022/12/12 18:46:53 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Zombie

SRC := main.cpp randomChump.cpp newZombie.cpp  Zombie.cpp \

OBJ= $(SRC:.cpp=.o)

GCC := C++ -Werror -Wextra -Wall  -std=c++98  #-fsanitize=thread

all : $(NAME)

$(NAME) : $(OBJ)
		@$(GCC) $(OBJ) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean :
	@rm -f $(NAME) $(OBJ)

re : fclean all
