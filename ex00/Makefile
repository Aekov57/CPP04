# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misimon <misimon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 13:41:04 by misimon           #+#    #+#              #
#    Updated: 2023/05/10 14:21:32 by misimon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main			\
		Dog				\
		Cat				\
		Animal			\
		WrongAnimal		\
		WrongCat		\

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