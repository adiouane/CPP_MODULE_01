# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 03:22:11 by adiouane          #+#    #+#              #
#    Updated: 2022/12/13 00:43:07 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

SRC := main.cpp \

OBJ= $(SRC:.cpp=.o)

GCC := C++ -Werror -Wextra -Wall  -std=c++98  #-fsanitize=thread

all : $(NAME)

$(NAME) : $(OBJ)
		@$(GCC) $(OBJ) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME) $(OBJ)

re : fclean all