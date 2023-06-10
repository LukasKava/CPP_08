# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/10 12:13:56 by lkavalia          #+#    #+#              #
#    Updated: 2023/06/10 14:38:48 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutant

CC = c++

CPP_FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CPP_FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re: fclean all
	@echo "remaking files!"