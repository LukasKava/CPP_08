# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 12:08:37 by lkavalia          #+#    #+#              #
#    Updated: 2023/06/09 16:31:07 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++

CPP_FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRC = main.cpp \
		Span.cpp

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CPP_FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re: fclean all
	@echo "remaking files!"