/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:15:10 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/28 17:28:28 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int				ft_strlen(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_atoi(char *str);

typedef	int		t_func(int x, int y);
typedef struct	s_op
{
	int		x;
	char	*operator;
	int		y;
}				t_op;

#endif
