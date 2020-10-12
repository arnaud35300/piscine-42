/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:20:24 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/28 17:28:41 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "core.h"

int		main(int ac, char **av)
{
	t_op	op;
	t_func	*tab[5];

	if (ac != 4)
		return (0);
	ft_assign_value(av, &op);
	if (!ft_check_value(op))
		return (0);
	ft_assign_tab(tab);
	ft_putnbr(ft_display_result(tab, op));
	ft_putstr("\n");
}
