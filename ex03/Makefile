# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 09:28:04 by dzivanov          #+#    #+#              #
#    Updated: 2022/03/11 19:18:42 by dzivanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= violence

SRC=main.cpp Weapon.cpp Weapon.hpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp

CC=c++

CFLAGS= -Wall -Werror -Wextra -std=c++98 -o

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CFLAGS) $(NAME)

clean:
	@rm -f ./*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re