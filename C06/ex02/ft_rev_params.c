/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:57:27 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/20 15:08:20 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	(void)argc;
	while (argv[j])
		j++;
	while (i < j)
	{
		ft_putstr(argv[j - i]);
		ft_putstr("\n");
		i++;
	}
}
