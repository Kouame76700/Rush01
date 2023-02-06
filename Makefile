# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgourlai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 22:41:57 by mgourlai          #+#    #+#              #
#    Updated: 2023/02/05 22:50:31 by mgourlai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = digiscript.c \
	digiscriptlib.c \
	ft_zero_till3.c \
	main.c \
	nb.c \
	nblib.c \
	open.c \
	openlib.c \

CFLAGS += -Wall -Wextra -Werror

CC = cc

OBJS = $(SRCS:.o=.o)

$NAME:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)
		
clean:
	rm -f *.o
	
fclean:	clean
	rm -f $(NAME)
