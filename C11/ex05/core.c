/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:13:55 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/28 17:29:16 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "operator.h"

void	ft_assign_value(char **av, t_op *op)
{
	op->x = ft_atoi(av[1]);
	op->operator = av[2];
	op->y = ft_atoi(av[3]);
}

int		ft_check_value(t_op op)
{
	if (ft_strlen(op.operator) != 1 || (op.operator[0] != '+'
		&& op.operator[0] != '-' && op.operator[0] != '/'
		&& op.operator[0] != '%' && op.operator[0] != '*'))
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (0);
	}
	if ((op.operator[0] == '/' || op.operator[0] == '%') && op.y == 0)
	{
		ft_putstr((op.operator[0] == '/')
				? "Stop : division by zero\n"
				: "Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void	ft_assign_tab(t_func **tab)
{
	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mul;
	tab[3] = &ft_mod;
	tab[4] = &ft_div;
}

int		ft_display_result(t_func **tab, t_op op)
{
	if (op.operator[0] == '+')
		return ((*tab[0])(op.x, op.y));
	if (op.operator[0] == '-')
		return ((*tab[1])(op.x, op.y));
	if (op.operator[0] == '*')
		return ((*tab[2])(op.x, op.y));
	if (op.operator[0] == '%')
		return ((*tab[3])(op.x, op.y));
	if (op.operator[0] == '/')
		return ((*tab[4])(op.x, op.y));
	return (0);
}
