# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arguilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 17:30:53 by arguilla          #+#    #+#              #
#    Updated: 2020/09/28 18:08:15 by arguilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	do-op

SRCS = core.c\
	   main.c\
	   operator.c\
	   utils.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	$(CC) ${CFLAGS} -c ${SRCS}
	$(CC) ${CFLAGS} -o $(NAME) $(SRCS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re fclean
