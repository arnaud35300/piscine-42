/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:50:26 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/30 14:12:59 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_order(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	len;

	len = -1;
	while (tab[++len])
	{
		i = -1;
		while (tab[++i])
			if (tab[i + 1] && (*cmp)(tab[i], tab[i + 1]) > 0)
				ft_order(&tab[i], &tab[i + 1]);
	}
}
