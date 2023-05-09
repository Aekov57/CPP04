# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misimon <misimon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 13:41:04 by misimon           #+#    #+#              #
#    Updated: 2023/05/09 13:44:31 by misimon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main			\
		Dog				\
		Cat				\
		Animal			\

ALL_SRC += $(addsuffix .cpp, $(SRC))

OBJS = $(ALL_SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all