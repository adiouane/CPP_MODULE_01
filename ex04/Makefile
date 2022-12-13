# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 15:43:06 by adiouane          #+#    #+#              #
#    Updated: 2022/12/12 18:40:51 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := a.out

SRC := main.cpp program.cpp \

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