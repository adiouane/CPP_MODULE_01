# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 11:38:10 by adiouane          #+#    #+#              #
#    Updated: 2022/12/12 18:41:11 by adiouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := harlFilter

SRC := main.cpp Harl.cpp   \

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