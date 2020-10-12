# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arguilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 21:25:18 by arguilla          #+#    #+#              #
#    Updated: 2020/09/28 15:20:41 by arguilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
gcc -c -Wall -Werror -Wextra ft_putchar.c ft_putstr.c ft_swap.c ft_strcmp.c ft_strlen.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
ranlib libft.a
