/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:43:14 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/28 14:07:38 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char					*ft_strdup(char *src)
{
	int		i;
	char	*str_cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	str_cpy = (char *)malloc(sizeof(char) * (i + 1));
	if (!str_cpy)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		str_cpy[i] = src[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

int						ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	i = 0;
	if (!(tab = malloc(sizeof(struct s_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
